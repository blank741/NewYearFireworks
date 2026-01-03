#include <thread>
#include <chrono>
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    cout << endl
         << "  ***** ****** " << endl
         << "  *   * *      " << endl
         << "  *   * *      " << endl
         << "  *   * *      " << endl
         << "  ***** *****  " << endl
         << "    *   *   *  " << endl
         << "  * *   *   *  " << endl
         << "  * *** *   *  " << endl
         << "  * *   *****  " << endl
         << "  * *   *      " << endl
         << "  * *   *      " << endl
         << "  * *** *      " << endl
         << " ***     ****** " << endl 
         << endl;
    this_thread::sleep_for(chrono::seconds(1));
    system("cls");
    cout << endl
         << "      *        " << endl
         << "       *       " << endl
         << " ************* " << endl
         << "               " << endl
         << "   * *   * *   " << endl
         << "   *  ***  *   " << endl
         << "   * *   * *   " << endl
         << "   *********   " << endl
         << "       *       " << endl
         << "  ***********  " << endl
         << "  *  *   *  *  " << endl
         << "  * ******* *  " << endl
         << "  *       ***  " << endl 
         << endl;
     this_thread::sleep_for(chrono::seconds(1));
     system("cls");
     cout << endl
         << " ************* " << endl
         << "       *       " << endl
         << "       *       " << endl
         << "  ***********  " << endl
         << "  *    *    *  " << endl
         << "  *    *    *  " << endl
         << "  *   * *   *  " << endl
         << "  *   *  *  *  " << endl
         << "  *  *    * *  " << endl
         << "  * *     * *  " << endl
         << "  *         *  " << endl
         << "  *         *  " << endl
         << "  *       ***  " << endl 
         << endl;
     this_thread::sleep_for(chrono::seconds(1));
     system("cls");
     cout << endl
         << "    *          " << endl
         << "    *          " << endl
         << "    ********   " << endl
         << "   *   *       " << endl
         << "   *   *       " << endl
         << "  *    *       " << endl
         << "       *       " << endl
         << " ************* " << endl
         << "       *       " << endl
         << "       *       " << endl
         << "       *       " << endl
         << "       *       " << endl
         << "       *       " << endl 
         << endl;
     this_thread::sleep_for(chrono::seconds(1));
     system("cls");
     cin.get();    
     return 0;
}