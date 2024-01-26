#include <iostream>
#include <iomanip>
using namespace std;
void A()
{
  cout << "\n";

  int r = 22;
  // cout<<"Enter R:    ";cin>>r;
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    };
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    };
    cout << endl;
  };
  for (int n = 1; n <= r / 4; n++)
  {
    // for(int o=0; o<=r/3-n;o++){  cout<<" ";};
    for (int p = 0; p <= 3 * r; p++)
    {
      cout << "*";
    };
    cout << endl;
  };
  for (int q = 1; q <= r; q++)
  {
    for (int s = 0; s <= r / 2; s++)
    {
      cout << "*";
    };
    for (int t = 0; t <= r * 2; t++)
    {
      cout << " ";
    };
    for (int u = 0; u <= r / 2 - 2; u++)
    {
      cout << "*";
    };
    cout << endl;
  };
}

void B()
{
  cout << "\n";

  int r = 6;
  //  cout<<"Enter R:    ";cin>>r;

  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r * 6; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r + i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 5 - 2; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r + i; l++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 6.4; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r; l++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 5 - 2; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r + i; l++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 0; j <= r * 6.5; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r + i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r * 6.5; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r + i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 5 - 2; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r + i; l++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 6.4; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r; l++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 5 - 2; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r + i; l++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r * 6; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r + i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void C()
{
  cout << "\n";

  int r = 21;
  //cout<<"Enter number of rows:    ";cin>>r;
  for (int i = 1; i <= r / 4; i++)
  {
    for (int j = 0; j <= r / 2.5; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= (r / 4) - i; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r * 2.5; l++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 2; i++)
  {
    for (int k = 0; k <= (r / 2.2) - i; k++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r / 2.5; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 2; i++)
  {
    for (int n = 0; n <= r / 2.5; n++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    for (int k = 0; k <= (r / 2.2) - i; k++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r / 2.5; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 4; i >= 1; i--)
  {
    for (int j = 0; j <= r / 2.5; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= (r / 4) - i; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r * 2.5; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void D()
{
  cout << "\n";

  int r = 20;
  // cout<<"Enter number of rows:    ";cin>>r;
  for (int i = 1; i <= r / 5; i++)
  {
    for (int j = 0; j <= r * 2; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= (i * 2) - 1; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 4; i++)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= (r * 2) - 3; m++)
    {
      cout << " ";
    }
    for (int n = 0; n <= (i * 2) - 3; n++)
    {
      cout << " ";
    }
    for (int o = 1; o <= r / 3; o++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 1.2; i++)
  {
    for (int p = 0; p <= r / 3; p++)
    {
      cout << "*";
    }
    for (int q = 0; q <= 2.3 * r; q++)
    {
      cout << " ";
    }
    for (int p = 0; p <= r / 3; p++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 4; i >= 1; i--)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= (r * 2) - 3; m++)
    {
      cout << " ";
    }
    for (int n = 0; n <= (i * 2) - 3; n++)
    {
      cout << " ";
    }
    for (int o = 1; o <= r / 3; o++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 5; i >= 1; i--)
  {
    for (int j = 0; j <= r * 2; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= (i * 2) - 1; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void E()
{
  cout << "\n";

  int r = 21;
  //   cout<<"Enter R:    ";cin>>r;
  for (int i = 1; i <= r / 4; i++)
  {
    for (int j = 0; j <= 3 * r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 1.3; i++)
  {
    for (int j = 0; j <= r / 3; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 4; i++)
  {
    for (int j = 0; j <= 2 * r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 1.3; i++)
  {
    for (int j = 0; j <= r / 3; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 4; i++)
  {
    for (int j = 0; j <= 3 * r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void F()
{
  cout << "\n";

  int r = 21;
  //  cout<<"Enter R:    ";cin>>r;
  for (int i = 1; i <= r / 4; i++)
  {
    for (int j = 0; j <= 2.8 * r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 1.5; i++)
  {
    for (int j = 0; j <= r / 3; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 4; i++)
  {
    for (int j = 0; j <= 2.3 * r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 1.3; i++)
  {
    for (int j = 0; j <= r / 3; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void G()
{

  cout << "\n";

  int r = 7;
  // cout<<"Enter number of rows:    ";cin>>r;
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r - i - 1; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= 4 * r + i; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= r + i; m++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 5 * r + i; l++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r; m++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i <= r; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= 5 * r; k++)
    {
      cout << " ";
    }
    // for(int j=0;j<=r;j++){cout<<"*";}
    for (int l = 0; l <= 1.6 * r + i; l++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 5 * r + i; l++)
    {
      cout << " ";
    }
    for (int m = 0; m <= r; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r - i - 1; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= 4 * r + i; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= r + i; m++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void H()
{
  cout << "\n";

  int r = 23;
  //  cout<<"Enter number of rows:    ";cin>>r;

  for (int i = 1; i <= r / 1.2; i++)
  {
    for (int j = 0; j <= r / 3; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 2; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 4; i++)
  {
    for (int m = 0; m <= 2.7 * r; m++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 1.2; i++)
  {
    for (int j = 0; j <= r / 3; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= r * 2; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void I()
{
  cout << "\n";

  int r = 27;
  //cout<<"Enter number of rows:    ";cin>>r;
  for (int i = 1; i <= r / 5; i++)
  {

    for (int j = 0; j <= r / 2; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= 1.3 * r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r; i++)
  {

    for (int j = 0; j <= r; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r / 3; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 5; i++)
  {

    for (int j = 0; j <= r / 2; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r * 1.3; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void J()
{
  cout << "\n";
  int r = 5;
  // cout<<"Enter number of rows:    ";cin>>r;
  //1
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= 12 * r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //2
  for (int i = 1; i <= r * 6; i++)
  {

    for (int j = 0; j <= r * 5; j++)
    {
      cout << " ";
    }

    for (int k = 0; k <= r * 2; k++)
    {
      cout << "*";
    }

    cout << endl;
  }

  //3
  for (int i = r; i >= 1; i--)
  {
    // for(int j=0;j<=r-i;j++){cout<<" ";}
    for (int k = 0; k <= 2 * r; k++)
    {
      cout << "*";
    }

    for (int l = 0; l <= (r * 1.8) + i; l++)
    {
      cout << " ";
    }

    for (int k = 0; k <= 2 * r; k++)
    {
      cout << "*";
    }

    cout << endl;
  }
  //4

  for (int i = r; i >= 1; i--)
  {
    //for(int j=0;j<=r;j++){cout<<" ";}
    for (int k = 0; k <= r - i; k++)
    {
      cout << " ";
    }

    for (int l = 0; l <= 4 * r + i + i; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void K()
{
  cout << "\n";

  int r = 22;
  // cout<<"Enter R:    ";cin>>r;

  for (int i = 1; i <= r; i++)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int j = 0; j <= 2 * (r - i); j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = r; i >= 1; i--)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int j = 0; j <= 2 * (r - i); j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void L()
{
  cout << "\n";

  int r = 30;
  // cout<<"Enter number of rows:    "; cin>>r;
  for (int i = 1; i <= r; i++)
  {
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 5; i++)
  {
    for (int k = 0; k <= r * 2; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void M()
{
  cout << "\n";

  int r = 16;
  // cout<<"Enter the value of Rows:   "; cin>>r;

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r / 2; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= r - i; k++)
    {
      cout << " ";
    }
    for (int h = 0; h <= r / 2; h++)
    {
      cout << "*";
    }
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    }
    for (int n = 1; n <= r - i; n++)
    {
      cout << " ";
    }
    for (int p = 0; p <= r / 2; p++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void N()
{
  cout << "\n";

  int r = 34;
  //cout<<"Enter the number of rows: ";cin>>r;

  for (int i = 1; i <= r; i++)
  {
    for (int a = 0; a <= r / 4; a++)
    {
      cout << "*";
    };

    for (int b = 0; b <= i - 1; b++)
    {
      cout << " ";
    };

    for (int c = 0; c <= r / 4; c++)
    {
      cout << "*";
    };

    for (int f = 0; f <= r - i; f++)
    {
      cout << " ";
    };
    for (int d = 0; d <= r / 4; d++)
    {
      cout << "*";
    };
    cout << endl;
  };
}

void O()
{
  cout << "\n";

  int r = 9;
  //cout<<"Enter number of rows:    ";
  //cin>>r;
  //1
  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r / 2; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r - i; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= 4 * r + i + i; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //2
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= 1.2 * r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 2.7 * r + i + i; l++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= 1.2 * r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= 4.8 * r; k++)
    {
      cout << " ";
    }
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= 1.2 * r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 2.7 * r + i + i; l++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 0; j <= r / 2; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r - i; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= 4 * r + i + i; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void P()
{
  cout << "\n";

  int r = 20;
  // cout<<"Enter number of rows:    ";cin>>r;
  for (int i = 1; i <= r / 5; i++)
  {
    for (int j = 0; j <= r * 2; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= (i * 2) - 1; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 4; i++)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= (r * 2) - 3; m++)
    {
      cout << " ";
    }
    for (int n = 0; n <= (i * 2) - 3; n++)
    {
      cout << " ";
    }
    for (int o = 1; o <= r / 3; o++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 1.2; i++)
  {
    for (int p = 0; p <= r / 3; p++)
    {
      cout << "*";
    }
    for (int q = 0; q <= 2.3 * r; q++)
    {
      cout << " ";
    }
    for (int p = 0; p <= r / 3; p++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = r / 4; i >= 1; i--)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= (r * 2) - 3; m++)
    {
      cout << " ";
    }
    for (int n = 0; n <= (i * 2) - 3; n++)
    {
      cout << " ";
    }
    for (int o = 1; o <= r / 3; o++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = r / 5; i >= 1; i--)
  {
    for (int j = 0; j <= r * 2; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= (i * 2) - 1; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int z = 1; z <= r; z++)
  {
    for (int y = 0; y <= r / 3; y++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void Q()
{
  cout << "\n";

  int r = 9;
  //cout<<"Enter number of rows:    ";
  //cin>>r;
  //1
  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r / 2; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r - i; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= 4 * r + i + i; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //2
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= 1.2 * r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 2.7 * r + i + i; l++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= 1.2 * r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= 4.8 * r; k++)
    {
      cout << " ";
    }
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= 1.2 * r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 2.7 * r + i + i; l++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int m = 2; m <= r - i - i; m++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 0; j <= r / 2; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r - i; k++)
    {
      cout << " ";
    }
    for (int l = 0; l <= 4 * r + i + i; l++)
    {
      cout << "*";
    }
    for (int m = 1; m <= r - i - i; m++)
    {
      cout << " ";
    }
    for (int n = 0; n <= r / 1.3; n++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void R()
{
  cout << "\n";

  int r = 20;
  // cout<<"Enter number of rows:    ";cin>>r;
  for (int i = 1; i <= r / 5; i++)
  {
    for (int j = 0; j <= r * 2; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= (i * 2) - 1; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 4; i++)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= (r * 2) - 3; m++)
    {
      cout << " ";
    }
    for (int n = 0; n <= (i * 2) - 3; n++)
    {
      cout << " ";
    }
    for (int o = 1; o <= r / 3; o++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r / 1.2; i++)
  {
    for (int p = 0; p <= r / 3; p++)
    {
      cout << "*";
    }
    for (int q = 0; q <= 2.3 * r; q++)
    {
      cout << " ";
    }
    for (int p = 0; p <= r / 3; p++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = r / 4; i >= 1; i--)
  {
    for (int l = 0; l <= r / 3; l++)
    {
      cout << "*";
    }
    for (int m = 0; m <= (r * 2) - 3; m++)
    {
      cout << " ";
    }
    for (int n = 0; n <= (i * 2) - 3; n++)
    {
      cout << " ";
    }
    for (int o = 1; o <= r / 3; o++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = r / 5; i >= 1; i--)
  {
    for (int j = 0; j <= r * 2; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= (i * 2) - 1; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int z = 1; z <= r; z++)
  {
    for (int y = 0; y <= r / 3; y++)
    {
      cout << "*";
    }
    for (int x = 0; x <= 2 * z; x++)
    {
      cout << " ";
    }
    for (int w = 0; w <= r / 3; w++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void S()
{
  cout << "\n";

  int r = 8;
  //cout<<"Enter number of rows:    ";cin>>r;

  //int r;
  // cout<<"Enter R:    ";cin>>r;
  //1
  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= 1.5 * r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= 5 * r + i + i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  //2
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 3.8 * r + i + i; l++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  //3
  for (int i = 1; i <= r / 2; i++)
  {
    // for(int j=0;j<=r-i;j++){cout<<" ";}
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //4
  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  //5
  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 0; j <= 1.5 * r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= 5.7 * r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //6
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= 6 * r + i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //7
  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= 7 * r; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //8
  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 3.8 * r + i + i; l++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  //9
  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 0; j <= 1.5 * r - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= 5 * r + i + i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void T()
{
  cout << "\n";

  int r = 27;
  //cout<<"Enter number of rows:    "; cin>>r;
  for (int i = 1; i <= r / 5; i++)
  {
    for (int k = 0; k <= 2.4 * r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r / 3; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void U()
{
  cout << "\n";

  int r = 9;
  //  int r;
  //cout<<"Enter number of rows:    ";cin>>r;
  for (int i = 1; i <= r * 2.7; i++)
  {
    for (int j = 0; j <= 1.2 * r; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= 4.8 * r; k++)
    {
      cout << " ";
    }
    for (int j = 0; j <= r; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    for (int j = 1; j <= r / 1.6 - i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    for (int l = 0; l <= 3.8 * r + i + i; l++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = r / 2; i >= 1; i--)
  {
    // for(int j=0;j<=r/2;j++){cout<<" ";}
    for (int k = 0; k <= r / 1.1 - i; k++)
    {
      cout << " ";
    }

    for (int l = 0; l <= 5.2 * r + i + i; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
//cout<<"Enter number of rows:    ";cin>>r;
//for(int i=1;i<=r*2.7;i++){
//      for(int j=0;j<=1.2*r;j++){cout<<"*";}
//      for(int k=0;k<=4.8*r;k++){cout<<" ";}
//      for(int j=0;j<=r;j++){cout<<"*";}
//  cout<<endl;}
//
//  for(int i=r;i>=1;i--){
//       for(int j=0;j<=1.2*r-i;j++){cout<<" ";}
//       for(int k=0;k<=r;k++){cout<<"*";}
//       for(int l=0;l<=2.7*r+i+i;l++){cout<<" ";}
//       for(int k=0;k<=r;k++){cout<<"*";}
//       cout<<endl;}
//
//       for(int i=r/2;i>=1;i--){
//    for(int j=0;j<=r/2;j++){cout<<" ";}
//    for(int k=0;k<=r-i;k++){cout<<" ";}
//    for(int l=0;l<=4*r+i+i;l++){cout<<"*";}cout<<endl;}

void V()
{
  cout << "\n";

  int r = 22;
  // cout<<"Enter R:    ";cin>>r;

  //int r;
  //cout<<"Enter R:    ";cin>>r;

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    };
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    };
    cout << endl;
  }

  for (int i = 1; i <= r / 2.7; i++)
  {
    for (int j = 0; j <= r / 1.02 + i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r * 1.05 - i - i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void W()
{
  cout << "\n";

  int r = 11;
  //  cout<<"Enter R:    ";cin>>r;
  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    };
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    };
    for (int j = 1; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int j = 1; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    };
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    };
    cout << endl;
  }
}

void X()
{
  cout << "\n";

  int r = 22;
  //cout<<"Enter R:    ";cin>>r;

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    };
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    };
    cout << endl;
  };
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    };
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    };
    cout << endl;
  };
}

void Y()
{
  cout << "\n";

  int r = 22;
  // cout<<"Enter R:    ";cin>>r;

  for (int i = r; i >= 1; i--)
  {
    for (int j = 0; j <= r - i; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r / 2; k++)
    {
      cout << "*";
    };
    for (int l = 1; l <= 2 * i - 2; l++)
    {
      cout << " ";
    };
    for (int m = 0; m <= r / 2; m++)
    {
      cout << "*";
    };
    cout << endl;
  };
  for (int i = 1; i <= r; i++)
  {
    for (int j = 0; j <= r; j++)
    {
      cout << " ";
    };
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    };

    cout << endl;
  };
}

void Z()
{
  cout << "\n";

  int r = 12;
  //cout<<"Enter number of rows:    ";cin>>r;

  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r * 5; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r * 2; i++)
  {
    for (int j = 0; j <= (4 * r) - 2 * i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= r; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 1; i <= r / 2; i++)
  {
    for (int j = 0; j <= r * 5; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  cout << "******************Program to show shapes of Alphabet***************";
  cout << endl;
  do
  {
    char in;
    cout << "Enter Any Alphabet:    ";
    cin >> in;

    switch (in)
    {
    case 'A':
      A();
      break;
    case 'B':
      B();
      break;
    case 'C':
      C();
      break;
    case 'D':
      D();
      break;
    case 'E':
      E();
      break;
    case 'F':
      F();
      break;
    case 'G':
      G();
      break;
    case 'H':
      H();
      break;
    case 'I':
      I();
      break;
    case 'J':
      J();
      break;
    case 'K':
      K();
      break;
    case 'L':
      L();
      break;
    case 'M':
      M();
      break;
    case 'N':
      N();
      break;
    case 'O':
      O();
      break;
    case 'P':
      P();
      break;
    case 'Q':
      Q();
      break;
    case 'R':
      R();
      break;
    case 'S':
      S();
      break;
    case 'T':
      T();
      break;
    case 'U':
      U();
      break;
    case 'V':
      V();
      break;
    case 'W':
      W();
      break;
    case 'X':
      X();
      break;
    case 'Y':
      Y();
      break;
    case 'Z':
      Z();
      break;
    default:
      cout << "Please Enter Any Upper case Alphabet🙄";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
  } while (true);
  return 0;
}