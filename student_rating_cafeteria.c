#include<stdio.h>
#define students 40
#define max_rating 10

int cafeteria_rating_array[students][1];
int students_counter, total_rating;
int frequency_array[max_rating][2];
int frequency_counter, frequency_count;
int i,j;


int main(void)
{
    printf("Please Rate The Quality Of Food In The Cafeteria On A Scale Of 1 To 10;\n1 Means Disgusting And 10 Means Excellent:\n\n");

    for(students_counter=0;students_counter<students;students_counter++)
    {
        do
        {   printf("Student no. %d :\t", students_counter+1);
            scanf("%d", &cafeteria_rating_array[students_counter][1]);
            if(cafeteria_rating_array[students_counter][1] < 1 || cafeteria_rating_array[students_counter][1] > max_rating ){printf("Please enter an valid. The range is between 1 and 10\n");}
        }
        while (cafeteria_rating_array[students_counter][1] < 1 || cafeteria_rating_array[students_counter][1] > max_rating );
            total_rating+=cafeteria_rating_array[students_counter][1];
    }


        printf( "\n\n");

        for (students_counter=0;students_counter<students;students_counter++)
        { printf( "Student no. %d rated the cafeteria food %d/10\n", students_counter+1, cafeteria_rating_array[students_counter][ 1 ] );
        }

        for (frequency_counter=0;frequency_counter<max_rating;frequency_counter++)
        {   frequency_array[frequency_counter][0]=frequency_counter+1;
            frequency_count=0;

            for (students_counter=0;students_counter<students;students_counter++)
            {
                 if (cafeteria_rating_array[students_counter][ 1 ]==frequency_counter+1)
                {
                 frequency_count=frequency_count+1;
                }
            }
            frequency_array[frequency_counter][1]=frequency_count;

        }




        printf( "\nThe Average Rating is %.1f/10\n", (double)total_rating/students);

        printf("\nThe Poll Results are:\n");

        for ( i = 0; i <max_rating; i++ )
            {	for ( j = 0; j < 2; j++ )
                {printf("%5d\t", frequency_array[i][j]);}
                 printf("\n");

            }



return 0;
}
