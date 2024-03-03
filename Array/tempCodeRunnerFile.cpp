vector<int> arr;
    int arr1[] = {1,2,4,5};
    int arr2[] = {9,4,5,5};
    int size1 = 4;
    int size2 = 4;

    for (int i = 0; i < size1; i++)
    {
        arr.push_back(arr1[i]);
    }
    for (int j = 0; j < size2; j++)
    {
        bool duplicate = false;
        for (int k = 0; k < arr.size(); k++)
        {
            if (arr2[j] == arr[k]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) arr.push_back(arr2[j]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }