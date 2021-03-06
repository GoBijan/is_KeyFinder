/*************************************************************************

	Copyright 2011 Ibrahim Sha'ath

	This file is part of KeyFinder.

	KeyFinder is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	KeyFinder is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with KeyFinder.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

#include "guivisuals.h"

Visuals* Visuals::inst = NULL;

Visuals* Visuals::getInstance(){
	if(inst == NULL){
		inst = new Visuals();
	}
	return inst;
}

QString Visuals::getKeyName(int n){
	if(n<0 || n>(signed)keyNames.size()){
		qDebug("Attempt to get name of out-of-bounds key (%d/%d)",n,(int)keyNames.size());
		return "";
	}
	return keyNames[n];
}

QColor Visuals::getKeyColour(int n){
	if(n<0 || n>(signed)keyColours.size()){
		qDebug("Attempt to get colour of out-of-bounds key (%d/%d)",n,(int)keyColours.size());
		return qRgb(0,0,0);
	}
	return keyColours[n];
}

Visuals::Visuals(){
	// key names
	keyNames.push_back("A");		keyNames.push_back("Am");
	keyNames.push_back("Bb");		keyNames.push_back("Bbm");
	keyNames.push_back("B");		keyNames.push_back("Bm");
	keyNames.push_back("C");		keyNames.push_back("Cm");
	keyNames.push_back("Db");		keyNames.push_back("Dbm");
	keyNames.push_back("D");		keyNames.push_back("Dm");
	keyNames.push_back("Eb");		keyNames.push_back("Ebm");
	keyNames.push_back("E");		keyNames.push_back("Em");
	keyNames.push_back("F");		keyNames.push_back("Fm");
	keyNames.push_back("Gb");		keyNames.push_back("Gbm");
	keyNames.push_back("G");		keyNames.push_back("Gm");
	keyNames.push_back("Ab");		keyNames.push_back("Abm");
	keyNames.push_back(""); // silence
	// key colours for display
	keyColours.push_back(qRgb(223,255,127));	keyColours.push_back(qRgb(191,223,127));
	keyColours.push_back(qRgb(255,127,255));	keyColours.push_back(qRgb(223,127,223));
	keyColours.push_back(qRgb(127,255,223));	keyColours.push_back(qRgb(127,223,191));
	keyColours.push_back(qRgb(255,127,127));	keyColours.push_back(qRgb(223,127,127));
	keyColours.push_back(qRgb(127,223,255));	keyColours.push_back(qRgb(127,191,223));
	keyColours.push_back(qRgb(255,255,127));	keyColours.push_back(qRgb(223,223,127));
	keyColours.push_back(qRgb(223,127,255));	keyColours.push_back(qRgb(191,127,223));
	keyColours.push_back(qRgb(127,255,127));	keyColours.push_back(qRgb(127,223,127));
	keyColours.push_back(qRgb(255,127,223));	keyColours.push_back(qRgb(223,127,191));
	keyColours.push_back(qRgb(127,255,255));	keyColours.push_back(qRgb(127,223,223));
	keyColours.push_back(qRgb(255,223,127));	keyColours.push_back(qRgb(223,191,127));
	keyColours.push_back(qRgb(127,127,255));	keyColours.push_back(qRgb(127,127,223));
	keyColours.push_back(qRgb(127,127,127)); // silence
}

void Visuals::setImageColours(QImage& image, int which) const{
	if(which==0){
		// Izo colour scheme
		image.setColor(0,qRgb(0,0,0));
		image.setColor(1,qRgb(0,1,3));
		image.setColor(2,qRgb(1,4,8));
		image.setColor(3,qRgb(1,7,12));
		image.setColor(4,qRgb(2,9,17));
		image.setColor(5,qRgb(2,12,24));
		image.setColor(6,qRgb(3,13,24));
		image.setColor(7,qRgb(4,15,27));
		image.setColor(8,qRgb(5,16,30));
		image.setColor(9,qRgb(6,18,33));
		image.setColor(10,qRgb(7,20,36));
		image.setColor(11,qRgb(8,22,39));
		image.setColor(12,qRgb(9,23,42));
		image.setColor(13,qRgb(10,25,45));
		image.setColor(14,qRgb(11,26,48));
		image.setColor(15,qRgb(14,29,50));
		image.setColor(16,qRgb(18,31,52));
		image.setColor(17,qRgb(21,33,54));
		image.setColor(18,qRgb(24,36,55));
		image.setColor(19,qRgb(27,38,57));
		image.setColor(20,qRgb(32,40,56));
		image.setColor(21,qRgb(38,43,55));
		image.setColor(22,qRgb(43,45,54));
		image.setColor(23,qRgb(49,48,53));
		image.setColor(24,qRgb(56,51,52));
		image.setColor(25,qRgb(65,53,50));
		image.setColor(26,qRgb(74,56,47));
		image.setColor(27,qRgb(84,58,45));
		image.setColor(28,qRgb(93,61,43));
		image.setColor(29,qRgb(103,64,40));
		image.setColor(30,qRgb(113,67,39));
		image.setColor(31,qRgb(123,69,37));
		image.setColor(32,qRgb(133,71,36));
		image.setColor(33,qRgb(142,74,34));
		image.setColor(34,qRgb(152,76,32));
		image.setColor(35,qRgb(160,79,32));
		image.setColor(36,qRgb(170,82,32));
		image.setColor(37,qRgb(179,85,32));
		image.setColor(38,qRgb(188,88,32));
		image.setColor(39,qRgb(196,91,32));
		image.setColor(40,qRgb(203,96,33));
		image.setColor(41,qRgb(210,101,34));
		image.setColor(42,qRgb(216,106,35));
		image.setColor(43,qRgb(223,112,36));
		image.setColor(44,qRgb(230,118,38));
		image.setColor(45,qRgb(236,123,39));
		image.setColor(46,qRgb(239,134,44));
		image.setColor(47,qRgb(241,147,49));
		image.setColor(48,qRgb(242,160,55));
		image.setColor(49,qRgb(244,173,60));
		image.setColor(50,qRgb(246,186,66));
		image.setColor(51,qRgb(248,200,72));
		image.setColor(52,qRgb(249,209,82));
		image.setColor(53,qRgb(249,218,92));
		image.setColor(54,qRgb(249,226,102));
		image.setColor(55,qRgb(250,234,113));
		image.setColor(56,qRgb(250,243,122));
		image.setColor(57,qRgb(251,251,132));
		image.setColor(58,qRgb(251,255,147));
		image.setColor(59,qRgb(252,255,163));
		image.setColor(60,qRgb(253,255,178));
		image.setColor(61,qRgb(253,255,194));
		image.setColor(62,qRgb(254,255,210));
		image.setColor(63,qRgb(254,255,225));
		image.setColor(64,qRgb(255,255,241));
	}else if(which==1){
		// Mono colour scheme
		image.setColor(0,qRgb(0,0,0));
		image.setColor(1,qRgb(4,4,4));
		image.setColor(2,qRgb(8,8,8));
		image.setColor(3,qRgb(12,12,12));
		image.setColor(4,qRgb(16,16,16));
		image.setColor(5,qRgb(20,20,20));
		image.setColor(6,qRgb(24,24,24));
		image.setColor(7,qRgb(28,28,28));
		image.setColor(8,qRgb(32,32,32));
		image.setColor(9,qRgb(36,36,36));
		image.setColor(10,qRgb(40,40,40));
		image.setColor(11,qRgb(44,44,44));
		image.setColor(12,qRgb(48,48,48));
		image.setColor(13,qRgb(52,52,52));
		image.setColor(14,qRgb(56,56,56));
		image.setColor(15,qRgb(60,60,60));
		image.setColor(16,qRgb(64,64,64));
		image.setColor(17,qRgb(68,68,68));
		image.setColor(18,qRgb(72,72,72));
		image.setColor(19,qRgb(76,76,76));
		image.setColor(20,qRgb(80,80,80));
		image.setColor(21,qRgb(84,84,84));
		image.setColor(22,qRgb(88,88,88));
		image.setColor(23,qRgb(92,92,92));
		image.setColor(24,qRgb(96,96,96));
		image.setColor(25,qRgb(100,100,100));
		image.setColor(26,qRgb(104,104,104));
		image.setColor(27,qRgb(108,108,108));
		image.setColor(28,qRgb(112,112,112));
		image.setColor(29,qRgb(116,116,116));
		image.setColor(30,qRgb(120,120,120));
		image.setColor(31,qRgb(124,124,124));
		image.setColor(32,qRgb(128,128,128));
		image.setColor(33,qRgb(132,132,132));
		image.setColor(34,qRgb(136,136,136));
		image.setColor(35,qRgb(140,140,140));
		image.setColor(36,qRgb(144,144,144));
		image.setColor(37,qRgb(148,148,148));
		image.setColor(38,qRgb(152,152,152));
		image.setColor(39,qRgb(156,156,156));
		image.setColor(40,qRgb(160,160,160));
		image.setColor(41,qRgb(164,164,164));
		image.setColor(42,qRgb(168,168,168));
		image.setColor(43,qRgb(172,172,172));
		image.setColor(44,qRgb(176,176,176));
		image.setColor(45,qRgb(180,180,180));
		image.setColor(46,qRgb(184,184,184));
		image.setColor(47,qRgb(188,188,188));
		image.setColor(48,qRgb(192,192,192));
		image.setColor(49,qRgb(196,196,196));
		image.setColor(50,qRgb(200,200,200));
		image.setColor(51,qRgb(204,204,204));
		image.setColor(52,qRgb(208,208,208));
		image.setColor(53,qRgb(212,212,212));
		image.setColor(54,qRgb(216,216,216));
		image.setColor(55,qRgb(220,220,220));
		image.setColor(56,qRgb(224,224,224));
		image.setColor(57,qRgb(228,228,228));
		image.setColor(58,qRgb(232,232,232));
		image.setColor(59,qRgb(236,236,236));
		image.setColor(60,qRgb(240,240,240));
		image.setColor(61,qRgb(244,244,244));
		image.setColor(62,qRgb(248,248,248));
		image.setColor(63,qRgb(252,252,252));
		image.setColor(64,qRgb(255,255,255));
	}else if(which==2){
		// Pred colour scheme
		image.setColor(0,qRgb(0,0,0));
		image.setColor(1,qRgb(0,0,24));
		image.setColor(2,qRgb(0,0,71));
		image.setColor(3,qRgb(0,0,125));
		image.setColor(4,qRgb(0,0,177));
		image.setColor(5,qRgb(0,0,219));
		image.setColor(6,qRgb(0,0,238));
		image.setColor(7,qRgb(0,0,246));
		image.setColor(8,qRgb(0,0,254));
		image.setColor(9,qRgb(0,13,255));
		image.setColor(10,qRgb(0,27,255));
		image.setColor(11,qRgb(0,45,255));
		image.setColor(12,qRgb(0,69,255));
		image.setColor(13,qRgb(0,88,255));
		image.setColor(14,qRgb(0,103,255));
		image.setColor(15,qRgb(0,117,255));
		image.setColor(16,qRgb(0,139,255));
		image.setColor(17,qRgb(0,154,255));
		image.setColor(18,qRgb(0,165,255));
		image.setColor(19,qRgb(0,178,255));
		image.setColor(20,qRgb(0,200,255));
		image.setColor(21,qRgb(0,220,255));
		image.setColor(22,qRgb(0,236,255));
		image.setColor(23,qRgb(0,250,255));
		image.setColor(24,qRgb(9,255,246));
		image.setColor(25,qRgb(23,255,232));
		image.setColor(26,qRgb(40,255,214));
		image.setColor(27,qRgb(61,255,193));
		image.setColor(28,qRgb(84,255,173));
		image.setColor(29,qRgb(99,255,161));
		image.setColor(30,qRgb(113,255,150));
		image.setColor(31,qRgb(132,255,132));
		image.setColor(32,qRgb(150,255,113));
		image.setColor(33,qRgb(161,255,99));
		image.setColor(34,qRgb(173,255,84));
		image.setColor(35,qRgb(193,255,61));
		image.setColor(36,qRgb(214,255,40));
		image.setColor(37,qRgb(232,255,23));
		image.setColor(38,qRgb(246,255,9));
		image.setColor(39,qRgb(255,250,0));
		image.setColor(40,qRgb(255,236,0));
		image.setColor(41,qRgb(255,220,0));
		image.setColor(42,qRgb(255,200,0));
		image.setColor(43,qRgb(255,178,0));
		image.setColor(44,qRgb(255,165,0));
		image.setColor(45,qRgb(255,154,0));
		image.setColor(46,qRgb(255,139,0));
		image.setColor(47,qRgb(255,117,0));
		image.setColor(48,qRgb(255,103,0));
		image.setColor(49,qRgb(255,88,0));
		image.setColor(50,qRgb(255,69,0));
		image.setColor(51,qRgb(255,45,0));
		image.setColor(52,qRgb(255,27,0));
		image.setColor(53,qRgb(255,13,0));
		image.setColor(54,qRgb(254,0,0));
		image.setColor(55,qRgb(241,0,0));
		image.setColor(56,qRgb(225,0,0));
		image.setColor(57,qRgb(206,0,0));
		image.setColor(58,qRgb(183,0,0));
		image.setColor(59,qRgb(165,0,0));
		image.setColor(60,qRgb(150,0,0));
		image.setColor(61,qRgb(139,0,0));
		image.setColor(62,qRgb(132,0,0));
		image.setColor(63,qRgb(128,0,0));
		image.setColor(64,qRgb(125,0,0));
	}else{
		// Hack colour scheme
		image.setColor(0,qRgb(0,0,0));
		image.setColor(1,qRgb(0,4,0));
		image.setColor(2,qRgb(0,8,0));
		image.setColor(3,qRgb(0,12,0));
		image.setColor(4,qRgb(0,16,0));
		image.setColor(5,qRgb(0,20,0));
		image.setColor(6,qRgb(0,24,0));
		image.setColor(7,qRgb(0,28,0));
		image.setColor(8,qRgb(0,32,0));
		image.setColor(9,qRgb(0,36,0));
		image.setColor(10,qRgb(0,40,0));
		image.setColor(11,qRgb(0,44,0));
		image.setColor(12,qRgb(0,48,0));
		image.setColor(13,qRgb(0,52,0));
		image.setColor(14,qRgb(0,56,0));
		image.setColor(15,qRgb(0,60,0));
		image.setColor(16,qRgb(0,64,0));
		image.setColor(17,qRgb(0,68,0));
		image.setColor(18,qRgb(0,72,0));
		image.setColor(19,qRgb(0,76,0));
		image.setColor(20,qRgb(0,80,0));
		image.setColor(21,qRgb(0,84,0));
		image.setColor(22,qRgb(0,88,0));
		image.setColor(23,qRgb(0,92,0));
		image.setColor(24,qRgb(0,96,0));
		image.setColor(25,qRgb(0,100,0));
		image.setColor(26,qRgb(0,104,0));
		image.setColor(27,qRgb(0,108,0));
		image.setColor(28,qRgb(0,112,0));
		image.setColor(29,qRgb(0,116,0));
		image.setColor(30,qRgb(0,120,0));
		image.setColor(31,qRgb(0,124,0));
		image.setColor(32,qRgb(0,128,0));
		image.setColor(33,qRgb(0,132,0));
		image.setColor(34,qRgb(0,136,0));
		image.setColor(35,qRgb(0,140,0));
		image.setColor(36,qRgb(0,144,0));
		image.setColor(37,qRgb(0,148,0));
		image.setColor(38,qRgb(0,152,0));
		image.setColor(39,qRgb(0,156,0));
		image.setColor(40,qRgb(0,160,0));
		image.setColor(41,qRgb(0,164,0));
		image.setColor(42,qRgb(0,168,0));
		image.setColor(43,qRgb(0,172,0));
		image.setColor(44,qRgb(0,176,0));
		image.setColor(45,qRgb(0,180,0));
		image.setColor(46,qRgb(0,184,0));
		image.setColor(47,qRgb(0,188,0));
		image.setColor(48,qRgb(0,192,0));
		image.setColor(49,qRgb(0,196,0));
		image.setColor(50,qRgb(0,200,0));
		image.setColor(51,qRgb(0,204,0));
		image.setColor(52,qRgb(0,208,0));
		image.setColor(53,qRgb(0,212,0));
		image.setColor(54,qRgb(0,216,0));
		image.setColor(55,qRgb(0,220,0));
		image.setColor(56,qRgb(0,224,0));
		image.setColor(57,qRgb(0,228,0));
		image.setColor(58,qRgb(0,232,0));
		image.setColor(59,qRgb(0,236,0));
		image.setColor(60,qRgb(0,240,0));
		image.setColor(61,qRgb(0,244,0));
		image.setColor(62,qRgb(0,248,0));
		image.setColor(63,qRgb(0,252,0));
		image.setColor(64,qRgb(0,255,0));
	}
}
