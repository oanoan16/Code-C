#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <windows.h>
char map[6][6], c , move ;
int countKey = 0 , countExit = 0;
int p_XPost , p_YPost ;
int e_XPost , e_YPost ;
int k_XPost , k_YPost ;
int xTemp  , yTemp  ;
int new_XPost, new_YPost;

// Gioi thieu game
//int Intro( )
//{
//	printf("                ¦¦¦¦¦¦+ ¦¦+   ¦¦+¦¦¦+   ¦¦+ ¦¦¦¦¦¦+ ¦¦¦¦¦¦¦+ ¦¦¦¦¦¦+ ¦¦¦+   ¦¦+ \n");
//	printf("                ¦¦+--¦¦+¦¦¦   ¦¦¦¦¦¦¦+  ¦¦¦¦¦+----+ ¦¦+----+¦¦+---¦¦+¦¦¦¦+  ¦¦¦ \n");
//	printf("                ¦¦+--¦¦+¦¦¦   ¦¦¦¦¦¦¦+  ¦¦¦¦¦+----+ ¦¦+----+¦¦+---¦¦+¦¦¦¦+  ¦¦¦ \n");
//	printf("                ¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦+¦¦+¦¦¦¦¦¦   ¦¦¦¦¦+--+  ¦¦¦   ¦¦¦¦¦¦+¦¦+¦¦¦ \n");
//	printf("                ¦¦¦¦¦¦+++¦¦¦¦¦¦++¦¦¦ +¦¦¦¦¦+¦¦¦¦¦¦++¦¦¦¦¦¦¦++¦¦¦¦¦¦++¦¦¦ +¦¦¦¦¦ \n");
//	printf("                +-----+  +-----+ +-+  +---+ +-----+ +------+ +-----+ +-+  +---+ \n");
//	printf("\n");
//	printf("\n");
//	printf("\n");
//	printf("\n");
//	printf("\n");
//	printf("\n");
//	
//                                                               
//                                                               
//                                                               
//                                                               
//                                    
//}

// Khoi tao ban do 
char KhoiTaoMap ( )
{	for ( int i = 1 ; i <= 4 ; i++ )
		for ( int j = 1 ; j <= 4 ; j++ )
			map[i][j] = '_';
	for ( int i = 0 ; i <= 5 ; i++ )
	{
		map[0][i] = '#';
		map[i][0] = '#';
		map[5][i] = '#';
		map[i][5] = '#';
	}		
}

// Ham Random
int Random ( )
{
	srand ( time(0) ) ;
	return ( rand()%( 4-1+1 ) + 1  )  ;
}

// Ramdom vi tri Player
void Player( )
{
	p_XPost = Random ( ) ;
	p_YPost = Random ( ) ;
	map[p_XPost][p_YPost] = 'P';
}		

// Random vi tri Key
void Key( )
{
	do 
	{
		k_XPost = Random ( ) ;
		k_YPost = Random ( ) ;
	}
	while ( map[k_XPost][k_YPost] != '_' );
	map[k_XPost][k_YPost] = 'K';
}	

// Random vi tri Exit
void Exit ( )
{
	do 
	{
		e_XPost = Random ( )  ;
		e_YPost = Random ( ) ;
	}
	while ( map[e_XPost][e_YPost] != '_' );
	map[e_XPost][e_YPost] = 'E';
}	

// Play
char Play()
{
	KhoiTaoMap ( ) ;
	Player ();
	Key ();
	Exit ();
	for ( int i = 0 ; i <= 5 ; i++ ) 
	{
		for ( int j = 0 ; j <= 5 ; j++ )
		{
			printf ( "%c " , map[i][j] );
		}
		printf ( "\n" );
	}
}
// Ham xoa man hinh
void Clear ( )
{
	system ( "cls" ) ;
		for ( int i = 0; i <= 5 ; i++ ) 
	{
		for ( int j = 0; j <= 5 ; j++ )
		{
			printf ( "%c " , map[i][j] );
		}
		printf ( "\n" );
	}	
}

// Ham doi vi tri
void Swap ( char *a, char *b )
{
	char 	temp = *a ;
			*a = *b ;
			*b = temp ;
}

// Check hang rao
int CheckRao ( )
{
	if ( map[new_XPost][new_YPost] == '#')  
		return 1;
	return 0;
}

// Kiem tra nhap
int CheckNhap (char c )
{
	if ( c=='W' || c=='w'|| c=='A'|| c=='a'|| c=='S'|| c=='s'|| c=='D'|| c=='d' )
		return 0;
	return 1;
}

// Vi tri di chuyen den
void NewPost ( char c )
{
	if ( c ==  'W' || c == 'w' ) 
	{
		new_XPost = p_XPost -1;
		new_YPost = p_YPost;
	}
	if ( c == 'A' ||  c=='a' ) 
	{
		new_XPost = p_XPost ;
		new_YPost = p_YPost -1 ;
	}
	if ( c == 'S'|| c=='s' ) 
	{
		new_XPost = p_XPost +1;
		new_YPost = p_YPost;
	}
	if ( c == 'D' || c== 'd' ) 
	{
		new_XPost = p_XPost ;
		new_YPost = p_YPost +1 ;
	}
}

// Check Key Exit;
void CheckKeyExit ( )
{
	if ( map[new_XPost][new_YPost] == 'K' ) 
	{
		map[new_XPost][new_YPost] = '_';
		countKey ++;
	}
	else 
	{
		if ( map[new_XPost][new_YPost] == 'E' && countKey != 0 )
	   	{
		 	map[new_XPost][new_YPost] = '_';
			countExit ++;
		}
	}
}

// Update Map
void Update ( )
{
	Swap ( &map[new_XPost][new_YPost] , &map[p_XPost][p_YPost] );
	p_XPost = new_XPost;
	p_YPost = new_YPost;
	Clear ( ) ;
}

// Di Chuyen
void Move ( )
{
	while ( countExit == 0 )
	{
		printf ( "Your move?" ) ;
		move = getchar ( ) ;
		fflush ( stdin ) ;
		if ( CheckNhap (move) == 0 )
		{
			NewPost ( move ) ;
			if ( CheckRao ( ) == 1 )
			{
				printf ( "You met the barrier, " ) ;
			}
			else 
			{
				CheckKeyExit ( );
				if ( map[new_XPost][new_YPost] == 'E' && countKey == 0 )
					printf ( "You can't exit, please accquire the key first" );
				else
					Update ( );
			}
			if ( countExit != 0 )
				printf ( "Congrats, you've just escaped the dungeon" );
		}
		else Clear ( );
	}
} 
int main ( )
{	
	Play ( ) ;
    Move ( ) ;
	return 0 ;
}

