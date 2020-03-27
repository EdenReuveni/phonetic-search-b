/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

TEST_CASE(""){
    string text="dont HeLlU worry be         happy     come sit haPpy go happy Come";
    CHECK(find(text,"happy")==string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
     CHECK(find(text,"vorry")==string("worry"));
    CHECK(find(text, "worri") == string("worry"));
     CHECK(find(text,"vorri")==string("worry"));
    CHECK(find(text, "wurry") == string("worry"));
     CHECK(find(text,"vurry")==string("worry"));
    CHECK(find(text, "vurri") == string("worry"));
     CHECK(find(text,"hapby")==string("happy"));
    CHECK(find(text, "habfy") == string("happy"));
     CHECK(find(text,"hapfy")==string("happy"));
    CHECK(find(text, "hafby") == string("happy"));
     CHECK(find(text,"haffy")==string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
     CHECK(find(text,"worry")==string("worry"));
    CHECK(find(text, "hapbi") == string("happy"));
     CHECK(find(text,"habfi")==string("happy"));
    CHECK(find(text, "hapfi") == string("happy"));
     CHECK(find(text,"hafbi")==string("happy"));
    CHECK(find(text, "haffi") == string("happy"));
     CHECK(find(text,"hafpi")==string("happy"));
    CHECK(find(text, "happi") == string("happy"));
     CHECK(find(text,"habbi")==string("happy"));
    CHECK(find(text, "habpi") == string("happy"));
     CHECK(find(text,"dont")==string("dont"));
    CHECK(find(text, "tont") == string("dont"));
     CHECK(find(text,"tond")==string("dont"));
    CHECK(find(text, "dond") == string("dont"));
     CHECK(find(text,"dunt")==string("dont"));
    CHECK(find(text, "tunt") == string("dont"));
     CHECK(find(text,"tund")==string("dont"));
    CHECK(find(text, "dund") == string("dont"));
     CHECK(find(text,"be")==string("be"));
    CHECK(find(text, "fe") == string("be"));
     CHECK(find(text,"pe")==string("be"));
    CHECK(find(text, "come") == string("come"));
     CHECK(find(text,"kome")==string("come"));
    CHECK(find(text, "qome") == string("come"));
       CHECK(find(text,"cume")==string("come"));
    CHECK(find(text, "kume") == string("come"));
     CHECK(find(text,"qume")==string("come"));
    CHECK(find(text, "sit") == string("sit"));
     CHECK(find(text,"zit")==string("sit"));
    CHECK(find(text, "syt") == string("sit"));
     CHECK(find(text,"zyt")==string("sit"));
    CHECK(find(text, "sid") == string("sit"));
     CHECK(find(text,"zid")==string("sit"));
    CHECK(find(text, "syd") == string("sit"));
     CHECK(find(text,"zyd")==string("sit"));
    CHECK(find(text, "go") == string("go"));
     CHECK(find(text,"jo")==string("go"));
    CHECK(find(text, "gu") == string("go"));
     CHECK(find(text,"ju")==string("go"));
    CHECK(find(text, "Happi") == string("happy"));
     CHECK(find(text,"haBpy")==string("happy"));
    CHECK(find(text, "DuNt") == string("dont"));
     CHECK(find(text,"TOnD")==string("dont"));
    CHECK(find(text, "HaFbI") == string("happy"));
     CHECK(find(text,"Ju")==string("go"));
    CHECK(find(text, "QuME") == string("come"));
     CHECK(find(text,"pE")==string("be"));
    CHECK(find(text, "ZYD") == string("sit"));
     CHECK(find(text,"HAbFI")==string("happy"));
    CHECK(find(text, "kUME") == string("come"));
     CHECK(find(text,"HAPPY")==string("happy"));
    CHECK(find(text, "DONT") == string("dont"));
     CHECK(find(text,"WORRY")==string("worry"));
    CHECK(find(text, "BE") == string("be"));
     CHECK(find(text,"COME")==string("come"));
    CHECK(find(text, "SIT") == string("sit"));
     CHECK(find(text,"GO")==string("go"));
    CHECK(find(text, "happy") == string("happy"));
     CHECK(find(text,"VoRri")==string("worry"));
    CHECK_THROWS(find(text, "H app I")); 
       CHECK_THROWS(find(text,""));
    CHECK_THROWS(find(text, "ha pp y"));
     CHECK_THROWS(find("","happy"));
    CHECK_THROWS(find(text, "habb"));
     CHECK_THROWS(find(text,"e"));
    CHECK_THROWS(find(text, "      "));
     CHECK(find("Hello World","heLlU")==string("Hello"));
    CHECK_THROWS(find(" ", ""));
     CHECK_THROWS(find(" "," "));
    CHECK_THROWS(find("",""));
     CHECK_THROWS(find(text,"be happy"));
    CHECK_THROWS(find(text, "happ"));
     CHECK(find("NULL","nulL")==string("NULL"));
    CHECK_THROWS(find(text, "BE "));
     CHECK_THROWS(find(text,"         h"));
    CHECK_THROWS(find(" ", "   "));
     CHECK(find(text,"Come")==string("come"));
    CHECK(find(text, "haPpy") == string("happy"));
     CHECK(find(text,"CUmE")==string("come"));
    CHECK_THROWS(find(text, "Com"));
     CHECK_THROWS(find(text,"DUnd     "));
    CHECK_THROWS(find(text, "     KuMe       "));
     CHECK_THROWS(find(text,"cone"));
    CHECK_THROWS(find(text, "de"));
     CHECK_THROWS(find(text,"Fi"));
     CHECK(find(text,"hABfi")==string("happy"));
     CHECK(find(text,"hello")==string("HeLlU"));
     CHECK(find(text,"helLo")==string("HeLlU"));
     CHECK(find(text,"hElLu")==string("HeLlU"));
     CHECK_THROWS(find(text,"         dont"));



}



