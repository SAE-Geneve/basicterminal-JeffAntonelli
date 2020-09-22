#include <iostream>
#include <string>

int main()
{
    std::cout << "Votre quete vous conduit dans ce donjon, il fait sombre, personne n'a du venir ici depuis bien longtemps,\n";
    std::cout << "pourtant deux torches fixees aux murs sont allumees semblant vous indiquer la route a suivre.\n";
    std::cout << "une porte se trouve sur votre gauche, elle n'a pas de serrure, elle a l'air de pouvoir s'ouvrir,\n";
    std::cout << "sur votre droite vous voyez un couloir avec au millieu un trou avec des piques au fond, il a l'air franchissable en sautant par dessus\n";
    std::cout << "il n'y a pas d'autre route.\n";
    std::cout << "Que faites vous?\n";

    char choix1;

    std::cout << "Appuyez sur 'a' pour prendre la porte\n";
    std::cout << "Appuyez sur 'b' pour sautez par dessus le trou\n";
    std::cout << "Votre choix?: ";
    std::cin >> choix1;

    while (choix1 != 'a' and choix1 != 'b') {
    std::cout << "Vous etes le hero, vous ne pouvez pas fuir.\n";
    return 0; // essayer faire revenir choix1
}
    
    if (choix1 == 'b') {
        std::cout << "Vous prenez de l'elan et essayez de sauter, malheureusement vous avez surestime vos capacites physique et finissez emplale sur les piques\n";
        return 0;// pareil qu au dessus 
    }

    if (choix1 == 'a') {
        std::cout << "La porte bloque, vous tapez dessus avec votre epaule et elle finit par s'ouvrir.\n";
        std::cout << "Vous arrivez dans une nouvelle salle, vous voyez un grand chandelier fixe au plafond\n";
        std::cout << "a cote de vous se trouve un mecanisme pour l'allumer.";
        std::cout << "'il n'y a pas de monstre dans ce donjon', vous a promis le chevalier a la retraite qui vous a donne la carte menant a ce donjon\n";
        std::cout << "'vu l'inactivite il a peu etre ete envahi par des chauves-souris ou d'autre petite betes.'\n";
        std::cout << "Vous hesitez, continuer discretement dans le noir, ou allumer le chandelier au risque de reveiller les chauves-souris et autre betes ayant elu domicile dans le donjon.\n";
    }
        char choix2;

        std::cout << "Appuyez sur 'a' pour allumer le chandelier.\n";
        std::cout << "Appuyer sur 'b' pour avancer dans le noir.\n";
        std::cout << "Votre choix?: ";
        std::cin >> choix2;

        if (choix2 == 'a') {
            std::cout << "Vous actionnez le mecanisme, vous fixez le chandelier qui s'allume apres quelque secondes,\n";
            std::cout << "Vous poussez un ouf de soulagement quand vous remarquez qu'il n'y a pas de betes collees au planfond.\n";
            std::cout << "Votre coeur fait un bond quand vous entendez un grognement de l' autre cote de la piece:\n";
            std::cout << "'UN OGRE!' criez- vous, 'LE VIEUX SALAUD M'A MENTI!, un monstre gigantesque dormait dans un coin, la lumiere l'a reveille, affame il fonce vers vous,\n";
            std::cout << "IL A JURE QUE LE DONJON ETAIT VIDE'.\n";
        }
        if (choix2 == 'b') {
            std::cout << "Vous sortez votre epee qui en la posant au sol, suivant les joints entre les dalles vers le fond de la salle ou vous pensez distinguer une porte.\n";
            std::cout << "Arrive au millieu de la salle, vous vous dites 'quel idiot, j'aurais du allumer'.\n";
            std::cout << "Maudissant votre decision, vous me sentez pas votre epee toucher quelque chose et vous trebucher dessus,\n";
            std::cout << "vous entendez un grognement et sentez une masse bouger, soundain deux yeux jaunes s'ouvrent a 8 metres du sol,\n";
            std::cout << "'UN OGRE, JE SUIS FICHU!'. L'ogre pousse un cri horrible, vous sentez qu'il commence a balancer les bras dans le noir cherchant a vous attraper.\n";
        }

        if (choix2 == 'a' or choix2 == 'b') {

            std::cout << "Vous n'etes pas equipe pour ce combat, avec votre epee courte vous avez peu de chance de vous en sortir.\n";
            std::cout << "mieux vaut fuir.\n";
             }
        if (choix2 != 'a' and choix2 != 'b') {
            std::cout << "vous ne pouvez pas faire demi tour, la porte, c'est refermee apres votre passage, et quelque chose la bloque\n";
            return 0; //retour choix 2

        }
        char choix3;

        std::cout << "Appuyer sur 'a' pour essayer quand meme de vous defendre.\n";
        std::cout << "Appuyer sur 'b' pour fuir.\n";
        std::cout << "Votre choix?: ";
        std::cin >> choix3;
            
        if (choix3 == 'a') {
            std::cout << "L'ogre lance un bras vers vous pour vous attraper, vous l'esquivez en roulant dessous,\n";
            std::cout << "mais a peine avez-vous le temps de vous relever que l'ogre vous saisis avec l' autre main,\n";
            std::cout << "alors qu'il commence a serrer pour vous ecraser, dans un reflexe, vous plantez votre epee dans un de ces yeux,\n";
            std::cout << "l'ogre serre de toutes ces forces et vous tue avant de tomber raide mort.\n";
            return 0;//comme d'hab revenir au debut
        }
        
        if (choix3 == 'b') {
            std::cout << "L'ogre essaye de vous attraper avec de ces grosses mains maladroites, vous commencez a courrir dans la direction opposee,\n";
            std::cout << "soudain, vous appercevez un reflet, dans un reflexe vous courrez dans sa direction, c'est la ferrure d'une porte,\n";
            std::cout << "'sauve' dites vous haletant, vous franchissez la porte et la referme derriere vous, il ne pourra jamais passer une main par cette petite porte.\n";
            std::cout << "Vous etes en securite maintenant, vous inspectez la chambre dans laquelle vous etes refugie,il n'y a pas d'autre entree, mais il est la devant vous!\n";
            std::cout << "'LE TRESOR DU DONJON!', vous exclamez vous, mais soudain vous realisez que vous etes coince ici avec, peut etre pour toujours.\n";
        }
        
        if (choix3 != 'a' and choix3 != 'b') {
            std::cout << "Vous devez echapper a un ogre, vous n'avez pas le temps pour ca\n";
        }//revenir choix3
 return 0;
}