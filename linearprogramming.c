// Solving LPP Problem (MAXIMIZE OR MINIMIZE) ACCORDING TO USER WISH
// Made by:Samriddha Raj Satyal
// Grade:XII Yala(Deerwalk Sifal School)
// Roll:24063

#include <stdio.h>

void main()
{
    // Open a file in write mode
    FILE *file = fopen("C:\\Users\\WindowsSRS\\OneDrive\\Desktop\\linear programming c\\lppoutput.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    double s, t, A, B, C, D, E, F, G, H, I, A1, B1, C1, D1, E1, F1, G1, H1;
    printf("FOR MAXIMIZATION, PRESS 1\nFOR MINIMIZATION, PRESS 2");
    printf("\n\nEnter  1 or 2 after reading above instruction:");
    int ask;
    double arr2[3][6];
    double arr3[3][6];
    scanf("%d", &ask);
    switch (ask)
    {
    case 1:
        printf("\n\nMaximize:\n\nZ=Ax+By s.t.c\n\nCx+Dy<=E\n\nFx+Gy<=H\n\nx,y>=0");
        printf("\nEnter value for A:");
        scanf("%lf", &A);
        printf("\nEnter value for B:");
        scanf("%lf", &B);
        printf("\nEnter value for C:");
        scanf("%lf", &C);
        printf("\nEnter value for D:");
        scanf("%lf", &D);
        printf("\nEnter value for E:");
        scanf("%lf", &E);
        printf("\nEnter value for F:");
        scanf("%lf", &F);
        printf("\nEnter value for G:");
        scanf("%lf", &G);
        printf("\nEnter value for H:");
        scanf("%lf", &H);
        if (B < 0 && D < 0 && G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (B < 0 && D < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (B < 0 && G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (D < 0 && G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx%.2fy+s=%.2f\n\n%.2fx%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }
        else if (B < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (D < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }
        else if (G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }
        else
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C, D, E, F, G, H);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }

        printf("\n\nTableau 1:");
        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
        printf("\ns\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", C, D, 1.00, 0.00, 0.00, E, F, G, 0.00, 1.00, 0.00, H, (-A), (-B), 0.00, 0.00, 1.00, 0.00);
        float arr[3][6] = {{C, D, 1, 0, 0, E}, {F, G, 0, 1, 0, H}, {(-A), (-B), 0, 0, 1, 0}};
        if ((arr[2][0] < 0) && (arr[2][1] < 0))
        {
            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
            if (arr[2][0] < arr[2][1])
            {
                if ((arr[0][5] / arr[0][0]) < (arr[1][5] / arr[1][0]))
                {
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][0], (arr[0][5]), (arr[0][0]));
                    printf("Pivot Element:%.2f from R1 and C1\n\n", arr[0][0]);
                    printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                    if (arr[0][0] == 1)
                    {
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[0][j]);
                            }
                        }

                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[1][1] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                                printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                                printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                            }
                            else
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][1];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                                printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                                printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[0][5], 0);
                        }
                    }
                    else
                    {
                        printf("\n\nPerforming R1=R1X%.2f:\n\n", 1 / arr[0][0]);
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] / arr[0][0];
                            }
                        }
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], F, G, 0.00, 1.00, 0.00, H, (-A), (-B), 0.00, 0.00, 1.00, 0.00);
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[0][j]);
                            }
                        }
                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2f from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            if (arr2[1][1] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                                printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                                printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                            }
                            else
                            {
                                printf("\n\nPerforming R2=R2X%.2f:\n\n", 1 / arr2[1][1]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][1];
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[0][1]) * arr3[1][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[1][j]);
                                    }
                                }
                                printf("\n\nNow, performing row equivalent operations to make R1 and R3 0\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[0][5], 0);
                        }
                    }
                }
                else
                {
                    // YA BHITRA KAAM GARNE
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][0], (arr[1][5]), (arr[1][0]));
                    printf("Pivot Element:%.2f from R2 and C1\n\n", arr[1][0]);
                    printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                    if (arr[1][0] == 1)
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                            printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                            if (arr2[0][1] == 0)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                            else
                            {
                                printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                            printf("Max Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[1][5], 0);
                        }
                    }
                    else
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] * (1 / arr[1][0]);
                            }
                        }
                        printf("\n\nPerforming R2=R2X%.2lf\n\n", (1 / arr[1][0]));
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr[0][0], arr[0][1], arr[0][2], arr[0][3], arr[0][4], arr[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr[2][0], arr[2][1], arr[2][2], arr[2][3], arr[2][4], arr[2][5]);
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                            printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                            if (arr2[0][1] == 0)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                            else
                            {
                                printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                            printf("Max Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[1][5], 0);
                        }
                    }
                }
            }
            else
            {
                if ((arr[0][5] / arr[0][1]) < (arr[1][5] / arr[1][1]))
                {
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][1], (arr[0][5]), (arr[0][1]));
                    printf("Pivot Element:%.2lf from R1 and C2\n\n", arr[0][1]);
                    printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                    if (arr[0][1] == 1)
                    {
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }

                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][1]) * arr2[0][j]);
                            }
                        }

                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[0][j]);
                            }
                        }

                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[1][0] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                            else
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], 0, arr2[0][5]);
                        }
                    }
                    else
                    {
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] / arr[0][1];
                            }
                        }
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][1]) * arr2[0][j]);
                            }
                        }

                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[0][j]);
                            }
                        }

                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[1][0] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                            else
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], 0, arr2[0][5]);
                        }
                    }
                }
                else
                {
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][1], (arr[1][5]), (arr[1][1]));
                    printf("Pivot Element:%.2lf from R2 and C2\n\n", arr[1][1]);
                    printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                    if (arr[1][1] == 0)
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][1]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[0][0] == 1)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                            else
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[0][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], 0, arr2[1][5]);
                        }
                    }
                    else
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] / arr[1][1];
                            }
                        }
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][1]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[0][0] == 1)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                            }
                            else
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[0][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], 0, arr2[1][5]);
                        }
                    }
                }
            }
        }
        else if (arr[2][0] < 0)
        {
            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
            if ((arr[0][5] / arr[0][0]) < (arr[1][5] / arr[1][0]))
            {
                printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr[2][0], arr[0][5], arr[0][0]);
                printf("So, pivot element:%.2lf from R1,C1", arr[0][0]);
                printf("\n\nEntering variable:x\n\nDeparting variable:s");
                if (arr[0][0] == 1)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j];
                        }
                    }
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + (-(arr[2][0]) * arr[0][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                    printf("\n\nTableau 2:");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\nx\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                        printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr2[2][1], arr2[1][5], arr2[1][1]);
                        printf("So, pivot element:%.2lf from R2,C2", arr2[1][1]);
                        printf("\n\nEntering variable:y\n\nDeparting variable:t");
                        if (arr2[1][1] == 0)
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                        }
                        else
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] / arr2[1][1];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                        printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[0][5], 0);
                    }
                }
                else
                {
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] / arr[0][0];
                        }
                    }
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + (-(arr[2][0]) * arr2[0][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                    printf("\n\nTableau 2:");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\nx\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                        printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr2[2][1], arr2[1][5], arr2[1][1]);
                        printf("So, pivot element:%.2lf from R2,C2", arr2[1][1]);
                        printf("\n\nEntering variable:y\n\nDeparting variable:t");
                        if (arr2[1][1] == 0)
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                        }
                        else
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] / arr2[1][1];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[0][5], arr3[1][5]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                        printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[0][5], 0);
                    }
                }
            }
            else
            {
                printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr[2][0], arr[1][5], arr[1][0]);
                printf("So, pivot element:%.2lf from R2,C1", arr[1][0]);
                printf("\n\nEntering variable:x\n\nDeparting variable:t");
                if (arr[1][0] == 1)
                {
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j];
                        }
                    }
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                    printf("Tableau 2:\n\n");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                        printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                        printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                        printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                        if (arr2[0][1] == 0)
                        {
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                        }
                        else
                        {
                            printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                        printf("Max Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[1][5], 0);
                    }
                }
                else
                {
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] * (1 / arr[1][0]);
                        }
                    }
                    printf("\n\nPerforming R2=R2X%.2lf\n\n", (1 / arr[1][0]));
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr[0][0], arr[0][1], arr[0][2], arr[0][3], arr[0][4], arr[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr[2][0], arr[2][1], arr[2][2], arr[2][3], arr[2][4], arr[2][5]);
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                    printf("Tableau 2:\n\n");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                        printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                        printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                        printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                        if (arr2[0][1] == 0)
                        {
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                        }
                        else
                        {
                            printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMax Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[1][5], arr3[0][5]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                        printf("Max Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[1][5], 0);
                    }
                }
            }
        }
        else if (arr[2][1] < 0)
        {
        }
        else
        {
            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
            printf("\n\nMax Value=%f at\n\nx=%f\n\ny=%f", arr[2][5], 0, 0);
        }
        break;

    case 2:
        printf("\n\nMinimize:\n\nZ=Ax+By s.t.c\n\nCx+Dy>=E\n\nFx+Gy>=H\n\nx,y>=0");
        printf("\nEnter value for A:");
        scanf("%lf", &A1);
        printf("\nEnter value for B:");
        scanf("%lf", &B1);
        printf("\nEnter value for C:");
        scanf("%lf", &C1);
        printf("\nEnter value for D:");
        scanf("%lf", &D1);
        printf("\nEnter value for E:");
        scanf("%lf", &E1);
        printf("\nEnter value for F:");
        scanf("%lf", &F1);
        printf("\nEnter value for G:");
        scanf("%lf", &G1);
        printf("\nEnter value for H:");
        scanf("%lf", &H1);
        A = E1;
        B = H1;
        C = C1;
        D = F1;
        E = A1;
        F = D1;
        G = G1;
        H = B1;
        printf("\n\nThe dual problem looks like this:\n\n");
        if (B < 0 && D < 0 && G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (B < 0 && D < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (B < 0 && G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (D < 0 && G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx%.2fy+s=%.2f\n\n%.2fx%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }
        else if (B < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx+%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (-B));
        }
        else if (D < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }
        else if (G < 0)
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }
        else
        {
            printf("\n\nYour LPP PROBLEM SEEMS LIKE THIS:\n\nMaximize:\n\nZ=%.2fx+%.2fy s.t.c\n\n%.2fx+%.2fy<=%.2f\n\n%.2fx+%.2fy<=%.2f\n\nx,y>=0", A, B, C, D, E, F, G, H);
            fprintf(file,"%.2f,%.2f,%.2f\n%.2f,%.2f,%.2f\n1,0,0\n0,1,0",C1, D1, E1, F1, G1, H1);
            printf("\n\nSolution:\n\nIntroducing s and t as positive slack variables in the given constraints:\n\n");
            printf("%.2fx+%.2fy+s=%.2f\n\n%.2fx+%.2fy+t=%.2f", C, D, E, F, G, H);
            printf("\n\nRe-writing all the equations in standard form:\n\n");
            printf("%.2fx+%.2fy+s+0t+0Z=%.2f\n%.2fx+%.2fy+0s+t+0Z=%.2f\n%.2fx-%.2fy+0s+0t+Z=0", C, D, E, F, G, H, (-A), (B));
        }

        printf("\n\nTableau 1:");
        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
        printf("\ns\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", C, D, 1.00, 0.00, 0.00, E, F, G, 0.00, 1.00, 0.00, H, (-A), (-B), 0.00, 0.00, 1.00, 0.00);
        arr[0][0] = C;
        arr[0][1] = D;
        arr[0][2] = 1;
        arr[0][3] = 0;
        arr[0][4] = 0;
        arr[0][5] = E;
        arr[1][0] = F;
        arr[1][1] = G;
        arr[1][2] = 0;
        arr[1][3] = 1;
        arr[1][4] = 0;
        arr[1][5] = H;
        arr[2][0] = -A;
        arr[2][1] = -B;
        arr[2][2] = 0;
        arr[2][3] = 0;
        arr[2][4] = 1;
        arr[2][5] = 0;

        if ((arr[2][0] < 0) && (arr[2][1] < 0))
        {
            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
            if (arr[2][0] < arr[2][1])
            {
                if ((arr[0][5] / arr[0][0]) < (arr[1][5] / arr[1][0]))
                {
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][0], (arr[0][5]), (arr[0][0]));
                    printf("Pivot Element:%.2f from R1 and C1\n\n", arr[0][0]);
                    printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                    if (arr[0][0] == 1)
                    {
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[0][j]);
                            }
                        }

                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[1][1] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                                printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                                printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][1];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                                printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                                printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[0][5], 0);
                        }
                    }
                    else
                    {
                        printf("\n\nPerforming R1=R1X%.2f:\n\n", 1 / arr[0][0]);
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] / arr[0][0];
                            }
                        }
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], F, G, 0.00, 1.00, 0.00, H, (-A), (-B), 0.00, 0.00, 1.00, 0.00);
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[0][j]);
                            }
                        }
                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2f from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            if (arr2[1][1] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                                printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                                printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                printf("\n\nPerforming R2=R2X%.2f:\n\n", 1 / arr2[1][1]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][1];
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[0][1]) * arr3[1][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[1][j]);
                                    }
                                }
                                printf("\n\nNow, performing row equivalent operations to make R1 and R3 0\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[0][5], 0);
                        }
                    }
                }
                else
                {
                    // YA BHITRA KAAM GARNE
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][0], (arr[1][5]), (arr[1][0]));
                    printf("Pivot Element:%.2f from R2 and C1\n\n", arr[1][0]);
                    printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                    if (arr[1][0] == 1)
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                            printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                            if (arr2[0][1] == 0)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                            printf("Min Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                        }
                    }
                    else
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] * (1 / arr[1][0]);
                            }
                        }
                        printf("\n\nPerforming R2=R2X%.2lf\n\n", (1 / arr[1][0]));
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr[0][0], arr[0][1], arr[0][2], arr[0][3], arr[0][4], arr[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr[2][0], arr[2][1], arr[2][2], arr[2][3], arr[2][4], arr[2][5]);
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][1] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                            printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                            if (arr2[0][1] == 0)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                    }
                                }
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                            printf("Min Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                        }
                    }
                }
            }
            else
            {
                if ((arr[0][5] / arr[0][1]) < (arr[1][5] / arr[1][1]))
                {
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][1], (arr[0][5]), (arr[0][1]));
                    printf("Pivot Element:%.2lf from R1 and C2\n\n", arr[0][1]);
                    printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                    if (arr[0][1] == 1)
                    {
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }

                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][1]) * arr2[0][j]);
                            }
                        }

                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[0][j]);
                            }
                        }

                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[1][0] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                        }
                    }
                    else
                    {
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] / arr[0][1];
                            }
                        }
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[1][1]) * arr2[0][j]);
                            }
                        }

                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[0][j]);
                            }
                        }

                        printf("\n\nNow, performing row equivalent operations to make R2 and R3 0\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nt\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[1][0] == 1)
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[1][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[1][5]), (arr2[1][0]));
                                printf("Pivot Element:%.2lf from R2 and C1\n\n", arr2[1][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:t\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[0][0]) * arr3[1][j];
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + (-arr2[2][0]) * arr3[1][j];
                                    }
                                }
                                printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                        }
                    }
                }
                else
                {
                    printf("\n\nSince %.2f is the most negative element and the ratio %.2f/%.2f is smallest, so:\n\n", arr[2][1], (arr[1][5]), (arr[1][1]));
                    printf("Pivot Element:%.2lf from R2 and C2\n\n", arr[1][1]);
                    printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                    if (arr[1][1] == 0)
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j];
                            }
                        }
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][1]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[0][0] == 1)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[0][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                        }
                    }
                    else
                    {
                        for (int i = 1; i < 2; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] / arr[1][1];
                            }
                        }
                        for (int i = 0; i < 1; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[0][1]) * arr2[1][j]);
                            }
                        }
                        for (int i = 2; i < 3; i++)
                        {
                            for (int j = 0; j < 6; j++)
                            {
                                arr2[i][j] = arr[i][j] + ((-arr[2][1]) * arr2[1][j]);
                            }
                        }
                        printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                        printf("Tableau 2:\n\n");
                        printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                        printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                        if (arr2[2][0] < 0)
                        {
                            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                            if (arr2[0][0] == 1)
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                            else
                            {
                                for (int i = 0; i < 1; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] / arr2[0][0];
                                    }
                                }
                                printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][0], (arr2[0][5]), (arr2[0][0]));
                                printf("Pivot Element:%.2lf from R1 and C1\n\n", arr2[0][0]);
                                printf("Entering Variable:x\n\nDeparting Variable:s\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                                for (int i = 1; i < 2; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[1][0]) * arr3[0][j]);
                                    }
                                }
                                for (int i = 2; i < 3; i++)
                                {
                                    for (int j = 0; j < 6; j++)
                                    {
                                        arr3[i][j] = arr2[i][j] + ((-arr2[2][0]) * arr3[0][j]);
                                    }
                                }
                                printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                                printf("Tableau 3:\n\n");
                                printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                                printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                                printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                                printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                            }
                        }
                        else
                        {
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                        }
                    }
                }
            }
        }
        else if (arr[2][0] < 0)
        {
            printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
            if ((arr[0][5] / arr[0][0]) < (arr[1][5] / arr[1][0]))
            {
                printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr[2][0], arr[0][5], arr[0][0]);
                printf("So, pivot element:%.2lf from R1,C1", arr[0][0]);
                printf("\n\nEntering variable:x\n\nDeparting variable:s");
                if (arr[0][0] == 1)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j];
                        }
                    }
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + (-(arr[2][0]) * arr[0][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                    printf("\n\nTableau 2:");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\nx\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                        printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr2[2][1], arr2[1][5], arr2[1][1]);
                        printf("So, pivot element:%.2lf from R2,C2", arr2[1][1]);
                        printf("\n\nEntering variable:y\n\nDeparting variable:t");
                        if (arr2[1][1] == 0)
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                        else
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] / arr2[1][1];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                        printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                    }
                }
                else
                {
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] / arr[0][0];
                        }
                    }
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[1][0]) * arr2[0][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + (-(arr[2][0]) * arr2[0][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                    printf("\n\nTableau 2:");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\nx\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nt\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\nZ\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is negative element present in the last row!\n\n");
                        printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr2[2][1], arr2[1][5], arr2[1][1]);
                        printf("So, pivot element:%.2lf from R2,C2", arr2[1][1]);
                        printf("\n\nEntering variable:y\n\nDeparting variable:t");
                        if (arr2[1][1] == 0)
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                        else
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] / arr2[1][1];
                                }
                            }
                            printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[1][5]), (arr2[1][1]));
                            printf("Pivot Element:%.2lf from R2 and C2\n\n", arr2[1][1]);
                            printf("Entering Variable:y\n\nDeparting Variable:t\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[0][1]) * arr3[1][j];
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + (-arr2[2][1]) * arr3[1][j];
                                }
                            }
                            printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                        printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                    }
                }
            }
            else
            {
                printf("\n\nSince %.2lf is the most negative element present in this tableau, and the ratio %.2lf/%.2lf is the smallest:\n\n", arr[2][0], arr[1][5], arr[1][0]);
                printf("So, pivot element:%.2lf from R2,C1", arr[1][0]);
                printf("\n\nEntering variable:x\n\nDeparting variable:t");
                if (arr[1][0] == 1)
                {
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j];
                        }
                    }
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                    printf("Tableau 2:\n\n");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                        printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                        printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                        printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                        if (arr2[0][1] == 0)
                        {
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                        else
                        {
                            printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                        printf("Min Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                    }
                }
                else
                {
                    for (int i = 1; i < 2; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] * (1 / arr[1][0]);
                        }
                    }
                    printf("\n\nPerforming R2=R2X%.2lf\n\n", (1 / arr[1][0]));
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr[0][0], arr[0][1], arr[0][2], arr[0][3], arr[0][4], arr[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr[2][0], arr[2][1], arr[2][2], arr[2][3], arr[2][4], arr[2][5]);
                    for (int i = 0; i < 1; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[0][0]) * arr2[1][j]);
                        }
                    }
                    for (int i = 2; i < 3; i++)
                    {
                        for (int j = 0; j < 6; j++)
                        {
                            arr2[i][j] = arr[i][j] + ((-arr[2][0]) * arr2[1][j]);
                        }
                    }
                    printf("\n\nPerforming operations to make R1 and R3 0:\n\n");
                    printf("Tableau 2:\n\n");
                    printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                    printf("\ns\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2[0][4], arr2[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                    if (arr2[2][1] < 0)
                    {
                        printf("\n\nThis tableau does not provide us an optimal solution as there is the presence of negative element in the last row.\n\n");
                        printf("\n\nSince %.2lf is the most negative element and the ratio %.2lf/%.2lf is smallest, so:\n\n", arr2[2][1], (arr2[0][5]), (arr2[0][1]));
                        printf("Pivot Element:%.2f from R1 and C2\n\n", arr2[0][1]);
                        printf("Entering Variable:y\n\nDeparting Variable:s\n\n");
                        if (arr2[0][1] == 0)
                        {
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j];
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                        else
                        {
                            printf("Performing R1=R1X%.2lf\n\n", 1 / arr2[0][1]);
                            for (int i = 0; i < 1; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] * (1 / arr2[0][1]);
                                }
                            }
                            for (int i = 1; i < 2; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[1][1]) * arr3[0][j]);
                                }
                            }
                            for (int i = 2; i < 3; i++)
                            {
                                for (int j = 0; j < 6; j++)
                                {
                                    arr3[i][j] = arr2[i][j] + ((-arr2[2][1]) * arr3[0][j]);
                                }
                            }
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2[1][4], arr2[1][5], arr2[2][0], arr2[2][1], arr2[2][2], arr2[2][3], arr2[2][4], arr2[2][5]);
                            printf("\n\nPerforming operations to make R2 and R3 0:\n\n");
                            printf("Tableau 3:\n\n");
                            printf("\n\nVar\tx\ty\ts\tt\tZ\tRHS");
                            printf("\ny\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nx\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\nZ\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n\n", arr3[0][0], arr3[0][1], arr3[0][2], arr3[0][3], arr3[0][4], arr3[0][5], arr3[1][0], arr3[1][1], arr3[1][2], arr3[1][3], arr3[1][4], arr3[1][5], arr3[2][0], arr3[2][1], arr3[2][2], arr3[2][3], arr3[2][4], arr3[2][5]);
                            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
                            printf("\n\nMin Value=%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr3[2][5], arr3[2][2], arr3[2][3]);
                        }
                    }
                    else
                    {
                        printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row.\n\n");
                        printf("Min Value:%.2lf at\n\nx=%.2lf\n\ny=%.2lf", arr2[2][5], arr2[2][2], arr2[2][3]);
                    }
                }
            }
        }
        else if (arr[2][1] < 0)
        {
        }
        else
        {
            printf("\n\nThis tableau provides us an optimal solution as there is no negative element present in the last row!\n\n");
            printf("\n\nMin Value=%f at\n\nx=%f\n\ny=%f", arr[2][5], arr[2][2], arr[2][3]);
        }

        break;

    default:
        printf("\nError");
    }
    
    fclose(file);

}