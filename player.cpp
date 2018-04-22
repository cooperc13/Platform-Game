#include "player.h"

//Designs the gravity and the physics of the player.
//Also designs the collision detection of the bricks.
void Player::Physics(Ground &ground)
{
<<<<<<< HEAD
	int midway = (ground.height/ 2) + ground.y;
	int midline = (ground.width / 2) + ground.x;

	//Checks if the player clips through the bottom of the block
=======
	int midway = (ground.dimension/ 2) + ground.y;
	
>>>>>>> bb0c12a364c347d301b404d47a2c88f9219ca40b
	if (y > midway
		&& y < ground.dimension + ground.y
		&& x + width > ground.x
		&& x < ground.x + ground.width)
	{
		y = ground.y + ground.dimension + 10;
		jump = false;
	}

<<<<<<< HEAD
	//Checks if the player clips through the top of the block
=======
>>>>>>> bb0c12a364c347d301b404d47a2c88f9219ca40b
	if (y >= ground.y - height
		&& y < midway
		&& x + width > ground.x
		&& x < ground.x + ground.width)
	{
		gravity = 0;
		y = ground.y - height;
		jump = false;
	}
}

//Prevents the player from moving left off the screen
void Player::Block(int &osszx)
{
	if (osszx > x)
	{
		x = osszx;
	}
}

//Sets the value of the gravity for the player
void Player::Gravity()
{
	gravity += velocity;
	y += gravity;
}

//Sets the gravity so that the walking enemies fall once they fall off of a platform
void Enemy::Physics(Ground &ground)
{
	if (y >= ground.y - height
		&& y < ground.y + ground.dimension
		&& x + width > ground.x
		&& x < ground.x + ground.width && dead == false)
	{
		gravity = 0;
		y = ground.y - height;
	}
}

//Once the enemy is killed, it will fall through the ground
void Enemy::Physics(int a, int b) {
	x = a;
	y = b;

	if (dead) {
		gravity += velocity;
		y += gravity;
	}
}

//Sets the value of gravity for the enemies
void Enemy::Gravity()
{
	gravity += velocity;
	y += gravity;
}

//Makes the enemy walk back and forth
void Enemy::AI(int limit)
{
<<<<<<< HEAD

=======
>>>>>>> bb0c12a364c347d301b404d47a2c88f9219ca40b
	if (max <= limit && dead == false)
	{
		x++;
		max++;
	}
	else if (max2 <= limit && dead == false)
	{
		x--;
		max2++;
	}

	if (max2 > limit && maxi == false)
	{
		max = 0;
		maxi = true;
	}
	if (max > limit && maxi == true)
	{
		max2 = 0;
		maxi = false;
	}

<<<<<<< HEAD
	if (player.end == true) {
		x = xx;
		y = yy;
	}

}

void Enemy::Orbit(int a, int b, int r) {

	x = a + (r*cos(orbit));
	y = b + (r*sin(orbit));


	orbit += 0.005;
=======
>>>>>>> bb0c12a364c347d301b404d47a2c88f9219ca40b
}

//Determines whether the enemy is killed or if the player is killed by the enemy.
//If the enemy is killed then the player jumps off of it
void Enemy::Kill(Player &player)
{
	if (x <= player.x + player.width &&
		x + width >= player.x &&
		y <= player.y + player.height &&
		y + height >= player.y && player.lasty < player.y)
	{
		dead = true;
		player.jump = true;
	}
	else if (x <= player.x + player.width &&
		x + width >= player.x &&
		y <= player.y + player.height &&
		y + height >= player.y && dead == false)
	{
		player.end = true;
	}
<<<<<<< HEAD
}

void Enemy::Kill1(Player &player)
{
	if (x <= player.x + player.width &&
		x + width >= player.x &&
		y <= player.y + player.height &&
		y + height >= player.y && dead == false)
	{
		player.end = true;
	}
}
=======
}
>>>>>>> bb0c12a364c347d301b404d47a2c88f9219ca40b
