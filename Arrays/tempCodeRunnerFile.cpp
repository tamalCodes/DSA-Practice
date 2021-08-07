for (int i = 0; i < n; i++)
        {
            pro = pro * arr[i];
            if (pro == 0)
                pro = 1;

            if (pro > maxi)
                maxi = pro;
        }