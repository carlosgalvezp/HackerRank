#include <iostream>
#include <vector>
#include <string>

class Person
{
    protected:
        std::string firstName;
        std::string lastName;
        int id;
    public:
        Person(std::string firstName,
               std::string lastName,
               int identification)
        {
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = identification;
        }

        void printPerson()
        {
            std::cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
        }

};

class Student :  public Person
{
    private:
        std::vector<int> testScores;
    public:
        // Write your constructor
        Student(const std::string& firstName,
                const std::string& lastName,
                const int id,
                const std::vector<int> scores)
            : Person(firstName, lastName, id),
              testScores(scores)
        {}

        // Write char calculate()
        char calculate()
        {
            // Compute average
            float avg = 0.F;
            for (std::size_t i = 0U; i < testScores.size(); ++i)
            {
                avg += static_cast<float>(testScores[i]);
            }
            avg /= static_cast<float>(testScores.size());

            // Return grade
            if (90.F <= avg && avg <=100.F)
                return 'O';
            else if (80.F <= avg && avg < 90.F)
                return 'E';
            else if (70.F <= avg && avg < 80.F)
                return 'A';
            else if (55.F <= avg && avg < 70.F)
                return 'P';
            else if (40.F <= avg && avg < 55.F)
                return 'D';
            else if (avg < 40.F)
                return 'T';
            else
                return ' ';
        }
};

int main()
{
    std::string firstName;
    std::string lastName;
    int id;
    int numScores;
    std::cin >> firstName >> lastName >> id >> numScores;
    std::vector<int> scores;

    for(int i = 0; i < numScores; i++)
    {
        int tmpScore;
        std::cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    std::cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
