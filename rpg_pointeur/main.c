#include <stdio.h>

void afficher_status (int pv, int or, char *arme)
{
    printf ("Status : %d PV | %d or | arme : %s\n", pv, or, arme);
    printf ("--------------------\n");
}

void initialiser_hero (int *pv, int *gold, char **arme_joueur, char **catalogue)
{
    *pv = 100;
    *gold = 50;
    *arme_joueur = catalogue[0];
    printf ("=> Le Héros entre dans le dojon.\n");
}

void declencher_piege_acide (int *pv, char **arme_joueur, char **catalogue) 
{
    printf ("Un piège à acide se déclenche !\n");
    *pv -= 30;
    *arme_joueur = catalogue[3];
    printf ("=> Le Héros est touché par l'acide et perd son arme fond !\n");
}

void ramasser_loot(char **arme_joueur, char **catalogue, int index_loot)
{
    printf ("Le Héros trouve un coffre et ramasse le loot !\n");
    *arme_joueur = catalogue[index_loot];
    printf ("=> Le Héros récupère une nouvelle arme : %s\n", *arme_joueur);
}

void trouve_monstre (int *pv, int *gold, char **arme_joueur, char **catalogue)
{
    printf ("Un monstre apparaît !\n");
    *pv -= 20;
    *gold += 10;
    *arme_joueur = catalogue[1];
    printf ("=> Le Héros combat le monstre et récupère de l'or et une nouvelle arme : %s\n", *arme_joueur);
}

void rentre_dans_taverne (int *pv, int *gold, char **arme_joueur, char **catalogue)
{
    printf ("Le Héros rentre dans la taverne pour se reposer.\n");
    *pv = 100;
    *gold -= 10;
    *arme_joueur = catalogue[1];
    printf ("=> Le Héros récupère tous ses PV et perd un peu d'or pour se soigner.\n");
}

void achete_une_pelle (int *gold, char **arme_joueur, char **catalogue)
{
    printf ("Le Héros entre dans une boutique et achète une pelle.\n");
    *gold -= 20;
    *arme_joueur = catalogue[4];
    printf ("=> Le Héros perd 20 d'or mais acquiert une pelle.\n");
}

void utilise_la_pelle (int *gold, char **arme_joueur, char **catalogue)
{
    printf ("Le Héros creuse dans la terre avec la pelle et trouve de l'or\n");
    *gold += 3;
    *arme_joueur = catalogue[4];
    printf ("=> Le Héros a trouvé 3 d'or.\n");
}

int main () {

    char *inventaire [5] = {
        "Dague rouillée",
        "Epee longue",
        "Hache de feu",
        "Mains nues",
        "Pelle",
    };

    int hero_pv;
    int hero_or;
    char *hero_arme;

    initialiser_hero(&hero_pv, &hero_or, &hero_arme, inventaire);
    afficher_status(hero_pv, hero_or, hero_arme);
    declencher_piege_acide(&hero_pv, &hero_arme, inventaire);
    afficher_status(hero_pv, hero_or, hero_arme);
    ramasser_loot(&hero_arme, inventaire, 2);
    afficher_status(hero_pv, hero_or, hero_arme);
    trouve_monstre(&hero_pv, &hero_or, &hero_arme, inventaire);
    afficher_status(hero_pv, hero_or, hero_arme);
    rentre_dans_taverne(&hero_pv, &hero_or, &hero_arme, inventaire);
    afficher_status(hero_pv, hero_or, hero_arme);
    achete_une_pelle(&hero_or, &hero_arme, inventaire);
    afficher_status(hero_pv, hero_or, hero_arme);
    utilise_la_pelle(&hero_or, &hero_arme, inventaire);
    afficher_status(hero_pv, hero_or, hero_arme);
}
