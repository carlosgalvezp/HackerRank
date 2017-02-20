#include <iostream>
#include <vector>

template <typename T>
class CircularBuffer
{
public:
    typedef T value_type;
    typedef T& reference;
    typedef const T& const_reference;
    typedef T* pointer;
    typedef const T* const_pointer;
    typedef pointer iteratior;
    typedef const_pointer const_iterator;
    typedef std::ptrdiff_t difference_type;

    CircularBuffer() = delete;
    CircularBuffer(T* data, const std::size_t data_size)
        : data_(data),
          data_size_(data_size),
          start_idx_(0U)
    {}

    reference at(const std::size_t pos)
    {
        const std::size_t idx = (start_idx_ + pos) % data_size_;
        return data_[idx];
    }

    reference operator[](const std::size_t pos)
    {
        return at(pos);
    }

    void rotateLeft(const std::size_t n_rotations)
    {
        // Assumption: n_rotations <= data_size
        if (start_idx_ + n_rotations < data_size_)
        {
            start_idx_ += n_rotations;
        }
        else
        {
            start_idx_ = (start_idx_ + n_rotations) - data_size_;
        }
    }

private:
    T* data_;
    std::size_t data_size_;
    std::size_t start_idx_;
};

int main()
{
    // Get input
    std::size_t array_size;
    std::size_t n_rotations;

    std::cin >> array_size >> n_rotations;

    // Allocate array and read data in
    std::vector<std::size_t> data(array_size);
    for(std::size_t i = 0U; i < array_size; ++i)
    {
        std::cin >> data[i];
    }

    // Perform rotation using a circular buffer
    CircularBuffer<std::size_t> buffer(&data[0], array_size);
    buffer.rotateLeft(n_rotations);

    // Print out
    for(std::size_t i = 0U; i < array_size; ++i)
    {
        std::cout << buffer[i] << " ";
    }

    return 0;
}
