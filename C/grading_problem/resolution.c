/*-- Resolution of the grading problem --*/

int *gradingStudents(int grades_count, int* grades, int* result_count)
{
	int	i;
	int	*result;

	*result_count = grades_count;
	i = 0;
	result = malloc(sizeof(int) * grades_count);
	while (i < grades_count)
	{
		if ((grades[i] + 2) % 5 == 0 && (grades[i] + 2) >= 40)
			result[i] = grades[i] + 2;
		else
			result[i] = grades[i];
		i++;
	}
	return (result);
}
