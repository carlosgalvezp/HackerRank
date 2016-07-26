#include <iostream>  // std::cin
#include <vector>
#include <algorithm>  // std::max

// https://en.wikipedia.org/wiki/Magic_square

typedef std::vector<std::vector<int>> Matrix;

int computeCost(const Matrix &matrix);
int absDiff(const Matrix& a, const Matrix& b);
void generateAllMagicMatrices(std::vector<Matrix>& matrices);
const std::size_t matrix_size = 3U;

const Matrix m_ref = {{2, 7, 6},
                      {9, 5, 1},
                      {4, 3, 8}};

Matrix rotate(const Matrix& m);
Matrix reflectH(const Matrix& m);
Matrix reflectV(const Matrix& m);
void printMatrix(const Matrix& m);

int main()
{
    // Read matrix
    Matrix matrix(matrix_size, std::vector<int>(matrix_size));

    for (std::size_t i = 0U; i < matrix_size; ++i)
    {
        for (std::size_t j = 0U; j < matrix_size; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    // Compute output
    const int cost = computeCost(matrix);

    // Print output
    std::cout << cost;

    return 0;
}

int computeCost(const Matrix &matrix)
{
    int cost = 1000000;

    // Generate other matrices by applying rotation and reflection
    // to the reference
    Matrix m_rot = m_ref;

    for (std::size_t i = 0U; i < 4U; ++i)
    {
        // Rotate
        m_rot = rotate(m_rot);

        // Compute cost for rotated and reflected matrices
        cost = std::min(cost, absDiff(m_rot, matrix));
        cost = std::min(cost, absDiff(reflectH(m_rot), matrix));
        cost = std::min(cost, absDiff(reflectV(m_rot), matrix));
    }

    return cost;
}

int absDiff(const Matrix &a, const Matrix &b)
{
    int result = 0;

    for (std::size_t i = 0U; i < a.size(); ++i)
    {
        for (std::size_t j = 0U; j < a.size(); ++j)
        {
            result += std::abs(a[i][j] - b[i][j]);
        }
    }
    return result;
}

Matrix rotate(const Matrix& m)
{
    Matrix out(m);

    for (std::size_t i = 0U; i < m.size(); ++i)
    {
        for (std::size_t j = 0U; j < m.size(); ++j)
        {
            out[i][j] = m[j][2 - i];
        }
    }

    return out;
}

Matrix reflectH(const Matrix& m)
{
    Matrix out(m);

    for (std::size_t i = 0U; i < m.size(); ++i)
    {
        out[0][i]                = m[m.size() - 1][i];
        out[m.size() - 1][i]     = m[0][i];
    }

    return out;
}

Matrix reflectV(const Matrix& m)
{
    Matrix out(m);

    for (std::size_t i = 0U; i < m.size(); ++i)
    {
        out[i][0]                = m[i][m.size() - 1];
        out[i][m.size() - 1]     = m[i][0];
    }

    return out;
}

void printMatrix(const Matrix &m)
{
    for (std::size_t i = 0U; i < m.size(); ++i)
    {
        for (std::size_t j = 0U; j < m.size(); ++j)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
