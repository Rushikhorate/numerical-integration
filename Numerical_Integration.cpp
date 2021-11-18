#include <iostream>
#include <math.h>
#include <windows.h>

/* Define function here */
#define f(x) 1 / (1 + pow(x, 2))

using namespace std;

int main()
{
    cout << " 1. Trapezoidal Rule \n 2. Simpson's 1/3 Rule \n 3. Simpson's 3/8 Rule\n";

start:
    int choice, a;

    do
    {

        cout << "Enter the choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            float lower, upper, integration = 0.0, stepSize, k;
            int i, subInterval;

            /* Input */
            cout << "Enter lower limit of integration: ";
            cin >> lower;
            cout << "Enter upper limit of integration: ";
            cin >> upper;
            cout << "Enter number of sub intervals: ";
            cin >> subInterval;

            /* Calculation */

            /* Finding step size */
            stepSize = (upper - lower) / subInterval;

            /* Finding Integration Value */
            integration = f(lower) + f(upper);

            for (i = 1; i <= subInterval - 1; i++)
            {
                k = lower + i * stepSize;
                integration = integration + 2 * (f(k));
            }

            integration = integration * stepSize / 2;

            cout << endl
                 << "Required value of integration is: " << integration;
        }
        break;

        case 2:
        {
            float lower, upper, integration = 0.0, stepSize, k;
            int i, subInterval;

            /* Input */
            cout << "Enter lower limit of integration: ";
            cin >> lower;
            cout << "Enter upper limit of integration: ";
            cin >> upper;
            cout << "Enter number of sub intervals: ";
            cin >> subInterval;

            /* Calculation */

            /* Finding step size */
            stepSize = (upper - lower) / subInterval;

            /* Finding Integration Value */
            integration = f(lower) + f(upper);

            for (i = 1; i <= subInterval - 1; i++)
            {
                k = lower + i * stepSize;

                if (i % 2 == 0)
                {
                    integration = integration + 2 * (f(k));
                }
                else
                {
                    integration = integration + 4 * (f(k));
                }
            }

            integration = integration * stepSize / 3;

            cout << endl
                 << "Required value of integration is: " << integration;
        }
        break;

        case 3:
        {
            float lower, upper, integration = 0.0, stepSize, k;
            int i, subInterval;

            /* Input */
            cout << "Enter lower limit of integration: ";
            cin >> lower;
            cout << "Enter upper limit of integration: ";
            cin >> upper;
            cout << "Enter number of sub intervals: ";
            cin >> subInterval;

            /* Calculation */

            /* Finding step size */
            stepSize = (upper - lower) / subInterval;

            /* Finding Integration Value */
            integration = f(lower) + f(upper);

            for (i = 1; i <= subInterval - 1; i++)
            {
                k = lower + i * stepSize;

                if (i % 3 == 0)
                {
                    integration = integration + 2 * (f(k));
                }
                else
                {
                    integration = integration + 3 * (f(k));
                }
            }

            integration = integration * stepSize * 3.0 / 8.0;

            cout << endl
                 << "Required value of integration is: " << integration;
        }
        break;

        default:
            cout << "Please enter right choice.\n\n";
            goto start;
        }

        cout << "\n\nDo u want to exit press(0) or want to continue press(1) : ";
        cin >> a;

    } while (a);

    cout << "Thank you for using Numerical Integration";
    for (int i = 0; i < 5; i++)
    {
        cout << " .";
        Sleep(1000);
    }

    return 0;
}
