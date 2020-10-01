#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string str; //the rhyme, consisting of a list of words separated by spaces
    char x;
    int count = 0;
    while(1)
    {
        cin >> str;
        if(str[0]>='0' && str[0]<='9')
        {
            break;
        }
        count++;
    }
    int val = 0, j = 1;
    /* calculating the value of number of kids */
    for(int i=0;i<str.length();i++)
    {
        val = val*j + str[i]-'0';
        j*=10;
    }
    string s[val];
    bool arr[val];
    memset(arr, false, sizeof arr);
    for(int i=0;i<val;i++)
    {
        cin >> s[i]; // the names of the kids, one per line
    }
    j = 0;
    int count2 = count;
    vector<string> vec;
    //cout << count;
    /* selecting the players alternatively one for each team */
    for(int i=0;i<val;i++)
    {
        count2 = count; //count of number of words in the rhyme
        while(1)
        {
        /* Checking if the current player is still in the queue of non-
           selected players */
            if(arr[j]==false)
                count2--;
            /* When our counting ends at a particular player we select it into one of the team */
            if(count2==0)
            {
                vec.push_back(s[j]); // pushing the new selected player into the vector
                arr[j] = true; // marking it as selected
                // j++;
                // j = j%val;
                break;
            }
            j++;
            j = j%val;
        }
    }
    int k1, k2;
    /* calculating the size of each team */
        if(vec.size()%2==0)
        {
            k1 = vec.size()/2;
            k2 = k1;
        }
        else
        {
            k1 = vec.size()/2 + 1;
            k2 = vec.size()/2;
        }
        /* printing the number of players in each team and the corresponding players */
        cout << k1 << endl;
        for(int i=0;i<vec.size();i+=2)
        {
            cout << vec[i] << endl;
        }
        cout << k2 << endl;
        for(int i=1;i<vec.size();i+=2)
        {
            cout << vec[i] << endl;
        }
        // for(int i=0;i<vec.size();i++)
        //     cout << vec[i] << ' ';
    return 0; 
}
