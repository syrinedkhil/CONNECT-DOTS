#include "mainGame.h"

mainGame::mainGame()
{
	
	View view(FloatRect(0, 0, 2005, 2020));
	if (!texture.loadFromFile("res/img.PNG")) {
		std::cout << "ERROR" << std::endl;
	}

	if (!font.loadFromFile("res/Awesome Possum Shine Demo.otf")) { cout << "not ok" << endl; }

	background.setTexture(texture);

	
}


void mainGame::startgame(RenderWindow& window) {
	View view(FloatRect(0, 0, 2005, 2020));
	window.setView(view);
	

	menu m(window.getSize().x, window.getSize().y);
	choixlevel l(window.getSize().x, window.getSize().y);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed) {
				if (event.key.code == Keyboard::Escape) {
					window.close();
				}
			}
			switch (event.type)
			{
			case Event::KeyReleased:
				switch (event.key.code)
				{
				case Keyboard::Up:
					m.moveUp();
					break;
				case Keyboard::Down:
					m.moveDown();
					break;
				case Keyboard::Return:
					RenderWindow Play(VideoMode(900, 900), "play");
					Play.setView(view);
					RenderWindow options(VideoMode(900, 900), "How to play");
					options.setView(view);
					int x = m.GetPressedItem();

					if (x == 1) { // le joueur choisi de commencer à jouer
						while (Play.isOpen()) {
							Event aevent;
							while (Play.pollEvent(aevent)) {
								if (aevent.type == Event::Closed) {
									Play.close();
								}
								if (aevent.type == Event::KeyPressed) {
									if (aevent.key.code == Keyboard::Escape) {
										Play.close();
									}
								}
								switch (aevent.type)
								{
								case Event::KeyReleased:
									switch (aevent.key.code)
									{
									case Keyboard::Up:
										l.moveUp();
										break;
									case Keyboard::Down:
										l.moveDown();
										break;
									case Keyboard::Return:

										int x = l.GetPressedItem();

										if (x == 0) {//Premier niveau
											string ch = "";
											string message = "";
											level1 l1;
											RenderWindow level1(VideoMode(900, 900), "level1");
											level1.setView(view);
											int i = 0;
											int j = 1;
											while (level1.isOpen()) {

												Event aevent1;

												while (level1.pollEvent(aevent1)) {
													switch (aevent1.type) {
													case Event::Closed:
														level1.close();
														break;
													case Event::KeyPressed:
														if (aevent1.key.code == Keyboard::Escape) {
															level1.close();
														}
														break;

													case Event::KeyReleased:
														switch (aevent1.key.code)
														{
														case Keyboard::Up:
															l1.moveUp();
															break;
														case Keyboard::Down:
															l1.moveDown();
															break;
														case Keyboard::Return:
															int a = l1.getpressedbutton();
															if (a != 5) {
																ch.append(to_string(a));
																i++;

																if (i > 1) {
																	bool result = l1.verif(ch[i - 1], ch[i - 2]);
																	if (result)
																		l1.setbackrectangle(ch[i - 1], ch[i - 2]);
																	else {
																		
																		message = "mip";
																	}
																}

															}
															else {
																if (ch.size() == 6) {
																	
																	message = "ok";
																}
																else
																	message = "not ok";
															}

														}
													}
												}
												level1.clear();
												level1.draw(background);
												l1.construire(level1);
												if (message == "ok")
													R.drawwinmessage(level1);
												else
												{
													if (message == "not ok") {
														R.drawfailmessage(level1);
													}
													else if (message == "mip")
														R.mouvementimpo(level1);

												}
												level1.display();

											}
										}
										if (x == 1) { //2eme niveau
											string ch = "";
											string message = "";
											level2 l2;
											RenderWindow level2(VideoMode(900, 900), "level2");
											level2.setView(view);
											int i = 0;

											while (level2.isOpen()) {

												Event aevent1;

												while (level2.pollEvent(aevent1)) {
													switch (aevent1.type) {
													case Event::Closed:
														level2.close();
														break;
													case Event::KeyPressed:
														if (aevent1.key.code == Keyboard::Escape) {
															level2.close();
														}
														break;

													case Event::KeyReleased:
														switch (aevent1.key.code)
														{
														case Keyboard::Up:
															l2.moveUp();
															break;
														case Keyboard::Down:
															l2.moveDown();
															break;
														case Keyboard::Return:
															int a = l2.getpressedbutton();
															if (a != 5) {
																ch.append(to_string(a));
																i++;

																if (i > 1) {
																	bool result = l2.verif(ch[i - 1], ch[i - 2]);
																	if (result)
																		l2.setbackrectangle(ch[i - 1], ch[i - 2]);
																	else {
																		message = "mip";
																	}
																}

															}
															else {
																if (ch.size() == 9) {
																	message = "ok";
																}
																else
																	message = "not ok";
															}

														}
													}
												}
												level2.clear();
												level2.draw(background);
												l2.construire(level2);
												if (message == "ok")
													R.drawwinmessage(level2);
												else
												{
													if (message == "not ok") {
														R.drawfailmessage(level2);
													}
													else if (message == "mip")
														R.mouvementimpo(level2);

												}
												level2.display();

											}



										}

										if (x == 2) {//niveau3
											string ch = "";
											string message = "";
											level3 l3;
											RenderWindow level3(VideoMode(900, 900), "level3");
											level3.setView(view);
											int i = 0;

											while (level3.isOpen()) {

												Event aevent1;

												while (level3.pollEvent(aevent1)) {
													switch (aevent1.type) {
													case Event::Closed:
														level3.close();
														break;
													case Event::KeyPressed:
														if (aevent1.key.code == Keyboard::Escape) {
															level3.close();
														}
														break;

													case Event::KeyReleased:
														switch (aevent1.key.code)
														{
														case Keyboard::Up:
															l3.moveUp();
															break;
														case Keyboard::Down:
															l3.moveDown();
															break;
														case Keyboard::Return:
															int a = l3.getpressedbutton();
															if (a != 5) {
																ch.append(to_string(a));
																i++;

																if (i > 1) {
																	bool result = l3.verif(ch[i - 1], ch[i - 2]);
																	if (result)
																		l3.setbackrectangle(ch[i - 1], ch[i - 2]);
																	else {
																		message = "mip";
																	}
																}

															}
															else {
																if (ch.size() == 11) {
																	message = "ok";
																}
																else
																	message = "not ok";
															}

														}
													}
												}
												level3.clear();
												level3.draw(background);
												l3.construire(level3);
												if (message == "ok")
													R.drawwinmessage(level3);
												else
												{
													if (message == "not ok") {
														R.drawfailmessage(level3);
													}
													else if (message == "mip")
														R.mouvementimpo(level3);

												}
												level3.display();

											}
										}
										if (x == 3) { //4eme niveau
											string ch = "";
											string message = "";
											level4 l4;
											RenderWindow level4(VideoMode(900, 900), "level3");
											level4.setView(view);
											int i = 0;

											while (level4.isOpen()) {

												Event aevent1;

												while (level4.pollEvent(aevent1)) {
													switch (aevent1.type) {
													case Event::Closed:
														level4.close();
														break;
													case Event::KeyPressed:
														if (aevent1.key.code == Keyboard::Escape) {
															level4.close();
														}
														break;

													case Event::KeyReleased:
														switch (aevent1.key.code)
														{
														case Keyboard::Up:
															l4.moveUp();
															break;
														case Keyboard::Down:
															l4.moveDown();
															break;
														case Keyboard::Return:
															int a = l4.getpressedbutton();
															if (a != 5) {
																ch.append(to_string(a));
																i++;

																if (i > 1) {
																	bool result = l4.verif(ch[i - 1], ch[i - 2]);
																	if (result)
																		l4.setbackrectangle(ch[i - 1], ch[i - 2]);
																	else {
																		message = "mip";
																	}
																}

															}
															else {
																if (ch.size() == 8) {
																	message = "ok";
																}
																else
																	message = "not ok";
															}

														}
													}
												}
												level4.clear();
												level4.draw(background);
												l4.construire(level4);
												if (message == "ok")
													R.drawwinmessage(level4);
												else
												{
													if (message == "not ok") {
														R.drawfailmessage(level4);
													}
													else if (message == "mip")
														R.mouvementimpo(level4);

												}
												level4.display();

											}



										}
										if (x == 4) { //5eme niveau
											string ch = "";
											string message = "";
											level5 l5;
											RenderWindow level5(VideoMode(900, 900), "level2");
											level5.setView(view);
											int i = 0;

											while (level5.isOpen()) {

												Event aevent1;

												while (level5.pollEvent(aevent1)) {
													switch (aevent1.type) {
													case Event::Closed:
														level5.close();
														break;
													case Event::KeyPressed:
														if (aevent1.key.code == Keyboard::Escape) {
															level5.close();
														}
														break;

													case Event::KeyReleased:
														switch (aevent1.key.code)
														{
														case Keyboard::Up:
															l5.moveUp();
															break;
														case Keyboard::Down:
															l5.moveDown();
															break;
														case Keyboard::Return:
															int a = l5.getpressedbutton();
															if (a != 5) {
																ch.append(to_string(a));
																i++;

																if (i > 1) {
																	bool result = l5.verif(ch[i - 1], ch[i - 2]);
																	if (result)
																		l5.setbackrectangle(ch[i - 1], ch[i - 2]);
																	else {
																		message = "mip";
																	}
																}

															}
															else {
																if (ch.size() == 7) {
																	message = "ok";
																}
																else
																	message = "not ok";
															}

														}
													}
												}
												level5.clear();
												level5.draw(background);
												l5.construire(level5);
												if (message == "ok")
													R.drawwinmessage(level5);
												else
												{
													if (message == "not ok") {
														R.drawfailmessage(level5);
													}
													else if (message == "mip")
														R.mouvementimpo(level5);

												}
												level5.display();

											}



										}
										if (x == 5) { //6eme niveau
											string ch = "";
											string message = "";
											level6 l6;
											RenderWindow level6(VideoMode(900, 900), "level2");
											level6.setView(view);
											int i = 0;

											while (level6.isOpen()) {

												Event aevent1;

												while (level6.pollEvent(aevent1)) {
													switch (aevent1.type) {
													case Event::Closed:
														level6.close();
														break;
													case Event::KeyPressed:
														if (aevent1.key.code == Keyboard::Escape) {
															level6.close();
														}
														break;

													case Event::KeyReleased:
														switch (aevent1.key.code)
														{
														case Keyboard::Up:
															l6.moveUp();
															break;
														case Keyboard::Down:
															l6.moveDown();
															break;
														case Keyboard::Return:
															int a = l6.getpressedbutton();
															if (a != 5) {
																ch.append(to_string(a));
																i++;

																if (i > 1) {
																	bool result = l6.verif(ch[i - 1], ch[i - 2]);
																	if (result)
																		l6.setbackrectangle(ch[i - 1], ch[i - 2]);
																	else {
																		message = "mip";
																	}
																}

															}
															else {
																if (ch.size() == 8) {
																	message = "ok";
																}
																else
																	message = "not ok";
															}

														}
													}
												}
												level6.clear();
												level6.draw(background);
												l6.construire(level6);
												if (message == "ok")
													R.drawwinmessage(level6);
												else
												{
													if (message == "not ok") {
														R.drawfailmessage(level6);
													}
													else if (message == "mip")
														R.mouvementimpo(level6);

												}
												level6.display();

											}



										}
										break;
									}
								}
								options.close();
								Play.clear();
								Play.draw(background);
								l.draw(Play);
								Play.display();

							}
						}
					}
					if (x == 2) {//afficher les regles du jeu
						howtoplay H;
						while (options.isOpen()) {
							Event aevent;
							while (options.pollEvent(aevent)) {
								switch (aevent.type)
								{
								case Event::Closed:
									options.close();
									break;
								case Event::KeyPressed:
									switch (aevent.key.code)
									{
									case Keyboard::Escape:
										options.close();
										break;
									case Keyboard::Up:
										H.moveup();
										break;
									case Keyboard::Down:
										H.movedown();
										break;
									case Keyboard::Return:
										int y = H.getselecteditem();
									
										switch (y)
										{
										case 0:
											options.close();
											break;
										case 1:
											options.close();
											Play.close();
											window.close();
										}
									}
								}



							}
							Play.close();
							options.clear();
							options.draw(background);
							H.draw(options);
							options.display();

						}
					}
					if (x == 3) {//sortir du jeu
						window.close();
					}


				}
				break;
			case Event::Closed:
				window.close();
				break;
			}
		}
		window.clear();
		window.draw(background);
		m.draw(window);
		window.display();
	}



}

mainGame::~mainGame()
{
}



