// *********By Array**********
// #include <iostream>
// int main()
// {
//     int target, n;

//     std::cout << "value of n:";
//     std::cin >> n;
//     int num[n];
//     for (int j = 0; j < n; j++)
//     {
//         std::cout << "numbers:";
//         std::cin >> num[j];
//     }

//     std::cout << "target:";
//     std::cin >> target;
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = i + 1; k < n; k++)
//         {
//             if (target == (num[i] + num[k]))
//             {

//                 std::cout << "[" << i << "," << k << "]";
//             }
//         }
//     }
//     // delete[] num; // deallocate memory

//     return 0;
// }

// ************BY Vector************
