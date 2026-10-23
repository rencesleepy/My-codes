import 'dart:io';
import 'dart:math';
void main ()
{
    print("SIMPLE GAME SYSTEN");
    stdout.write("Enter if you want to continue [YES][NO]: ");
    String start = stdin.readLineSync()!;
    print("You've chosen: $start");
    if (start.toLowerCase() == "yes")
    {
        
        int EnemyHealth = 100;
        int PlayerHealth = 50;
        do 
        {
            print ("===MONSTER BATTLE===");
            print ("Enemy health, $EnemyHealth");
            print ("Player Health, $PlayerHealth");

            stdout.write("Attack the enemy [ATTACK][HEAL]: ");
            String attack = stdin.readLineSync()!;
            if (attack == "ATTACK" || attack == "attack")
            {
                Random RandomStat = Random();
                EnemyHealth -= 25;
                int EnemyDamage = RandomStat.nextInt(10) + 1;
                int PlayerCriticalDamage = RandomStat.nextInt(30) + 1;
                int TotalDamage = 0;
                PlayerHealth -= EnemyDamage;
                EnemyHealth -= PlayerCriticalDamage;
                print ("ATTACKED!");
                print ("Enemy health $EnemyHealth");
                print ("Enemy damaged you: $EnemyDamage");
                print ("Your default damage: 25");
                print ("You dealt critically damage to enemy: $PlayerCriticalDamage");
                TotalDamage += PlayerCriticalDamage + 25;
                print ("Your total damage: $TotalDamage");
                if (EnemyHealth <= 0)
                {
                    print("YOU WON");
                    return;
                }

                if (PlayerHealth <= 0)
                {
                    print ("GAME OVER! YOU LOST");
                }
            }
            else if (attack == "HEAL" || attack == "heal")
            {
                PlayerHealth += 20;
                print ("HEALING");
                print ("Player health: $PlayerHealth");
            }
            else 
            {
                print("You did not attacked");
            }
        } while (EnemyHealth > 0 && PlayerHealth > 0);
    }
    else 
    {
        print ("RETREATED");
    }
}
