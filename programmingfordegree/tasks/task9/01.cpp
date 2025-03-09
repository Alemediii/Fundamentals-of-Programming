// Suppose (N is a previous declared constant)
// typedef array<int,N> TVec;
// Build the next subprograms:
// a) void printArr(TVec a); to print it


// void printArr(TVec v){
//     for (int i = 0; i < N; i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// b) void readArr(TVec& a); to read it from the user
// keyboard

// void readArr(TVec& a){
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i]
//     }
    
// }

// c) TVec readArr(); to read it from the user keyboard
// but as a function that returns the local TVec array
// returned


// TVec readArr(){
//     TVec v;
//     cout << "define vector: ";
//     for (int i = 0; i < N; i++)
//     {
//         cin >> v[i];
//     }
//     return v;
// }
