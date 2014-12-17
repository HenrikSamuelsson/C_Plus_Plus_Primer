```cpp
/**
 * Reads from an istream until end-of-file is found and prints what is read.
 * 
 * @param input_stream stream to read from
 * @return the stream that was read
 */
istream& read(istream& input_stream)
{
    string in_data;
    
    while (input_stream >> in_data)
    {
        ;
    }
    cout << "End of in data" << endl;
    cout << "Read this data: " << in_data << endl;
    input_stream.clear();
    return input_stream;
}
```
