```cpp
while (cin >> i) /* ... */
```
The while will terminate when the state of the >> expression becomes invalid because the input failed. The most common reason is that the end-of-file is hit or that incorrect type of data was encountered. It can also be so that the stream is terminated because of system level failure.  
