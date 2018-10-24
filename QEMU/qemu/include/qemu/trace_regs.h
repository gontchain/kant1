
#ifndef QEMU_TRACE_REGS_H
#define QEMU_TRACE_REGS_H

const QEMURegTraceItem qemu_reg_trace_items[] = {
{ "pc", 0 },
{ "cur_addr", 1 },
{ "caller_addr", 2 },
{ "origin_addr", 3 },
{ "gas_price", 4 },
{ "ext_code_size", 5 },
{ "inp_data_size", 6 },
{ "log_ptr", 7 },
{ "sp", 8 },
{ "gas_available", 9 },
{ "data_bus0", 10 },
{ "data_bus1", 11 },
{ "data_bus2", 12 },
{ "data_bus3", 13 },
{ "data_bus4", 14 },
{ "data_bus5", 15 },
{ "data_bus6", 16 },
{ "data_bus7", 17 },
{ "data_bus8", 18 },
{ "data_bus9", 19 },
{ "data_bus10", 20 },
{ "data_bus11", 21 },
{ "data_bus12", 22 },
{ "data_bus13", 23 },
{ "data_bus14", 24 },
{ "data_bus15", 25 },
{ "data_bus16", 26 },
{ "data_bus17", 27 },
{ "data_bus18", 28 },
{ "data_bus19", 29 },
{ "data_bus20", 30 },
{ "data_bus21", 31 },
{ "data_bus22", 32 },
{ "data_bus23", 33 },
{ "data_bus24", 34 },
{ "data_bus25", 35 },
{ "data_bus26", 36 },
{ "data_bus27", 37 },
{ "data_bus28", 38 },
{ "data_bus29", 39 },
{ "data_bus30", 40 },
{ "data_bus31", 41 },
{ "data_bus32", 42 },
{ "data_bus33", 43 },
{ "data_bus34", 44 },
{ "data_bus35", 45 },
{ "data_bus36", 46 },
{ "data_bus37", 47 },
{ "data_bus38", 48 },
{ "data_bus39", 49 },
{ "data_bus40", 50 },
{ "data_bus41", 51 },
{ "data_bus42", 52 },
{ "data_bus43", 53 },
{ "data_bus44", 54 },
{ "data_bus45", 55 },
{ "data_bus46", 56 },
{ "data_bus47", 57 },
{ "data_bus48", 58 },
{ "data_bus49", 59 },
{ "data_bus50", 60 },
{ "data_bus51", 61 },
{ "data_bus52", 62 },
{ "data_bus53", 63 },
{ "data_bus54", 64 },
{ "data_bus55", 65 },
{ "data_bus56", 66 },
{ "data_bus57", 67 },
{ "data_bus58", 68 },
{ "data_bus59", 69 },
{ "data_bus60", 70 },
{ "data_bus61", 71 },
{ "data_bus62", 72 },
{ "data_bus63", 73 },
{ "data_bus64", 74 },
{ "data_bus65", 75 },
{ "data_bus66", 76 },
{ "data_bus67", 77 },
{ "data_bus68", 78 },
{ "data_bus69", 79 },
{ "data_bus70", 80 },
{ "data_bus71", 81 },
{ "data_bus72", 82 },
{ "data_bus73", 83 },
{ "data_bus74", 84 },
{ "data_bus75", 85 },
{ "data_bus76", 86 },
{ "data_bus77", 87 },
{ "data_bus78", 88 },
{ "data_bus79", 89 },
{ "data_bus80", 90 },
{ "data_bus81", 91 },
{ "data_bus82", 92 },
{ "data_bus83", 93 },
{ "data_bus84", 94 },
{ "data_bus85", 95 },
{ "data_bus86", 96 },
{ "data_bus87", 97 },
{ "data_bus88", 98 },
{ "data_bus89", 99 },
{ "data_bus90", 100 },
{ "data_bus91", 101 },
{ "data_bus92", 102 },
{ "data_bus93", 103 },
{ "data_bus94", 104 },
{ "data_bus95", 105 },
{ "data_bus96", 106 },
{ "data_bus97", 107 },
{ "data_bus98", 108 },
{ "data_bus99", 109 },
{ "data_bus100", 110 },
{ "data_bus101", 111 },
{ "data_bus102", 112 },
{ "data_bus103", 113 },
{ "data_bus104", 114 },
{ "data_bus105", 115 },
{ "data_bus106", 116 },
{ "data_bus107", 117 },
{ "data_bus108", 118 },
{ "data_bus109", 119 },
{ "data_bus110", 120 },
{ "data_bus111", 121 },
{ "data_bus112", 122 },
{ "data_bus113", 123 },
{ "data_bus114", 124 },
{ "data_bus115", 125 },
{ "data_bus116", 126 },
{ "data_bus117", 127 },
{ "data_bus118", 128 },
{ "data_bus119", 129 },
{ "data_bus120", 130 },
{ "data_bus121", 131 },
{ "data_bus122", 132 },
{ "data_bus123", 133 },
{ "data_bus124", 134 },
{ "data_bus125", 135 },
{ "data_bus126", 136 },
{ "data_bus127", 137 },
{ "data_bus128", 138 },
{ "data_bus129", 139 },
{ "data_bus130", 140 },
{ "data_bus131", 141 },
{ "data_bus132", 142 },
{ "data_bus133", 143 },
{ "data_bus134", 144 },
{ "data_bus135", 145 },
{ "data_bus136", 146 },
{ "data_bus137", 147 },
{ "data_bus138", 148 },
{ "data_bus139", 149 },
{ "data_bus140", 150 },
{ "data_bus141", 151 },
{ "data_bus142", 152 },
{ "data_bus143", 153 },
{ "data_bus144", 154 },
{ "data_bus145", 155 },
{ "data_bus146", 156 },
{ "data_bus147", 157 },
{ "data_bus148", 158 },
{ "data_bus149", 159 },
{ "data_bus150", 160 },
{ "data_bus151", 161 },
{ "data_bus152", 162 },
{ "data_bus153", 163 },
{ "data_bus154", 164 },
{ "data_bus155", 165 },
{ "data_bus156", 166 },
{ "data_bus157", 167 },
{ "data_bus158", 168 },
{ "data_bus159", 169 },
{ "data_bus160", 170 },
{ "data_bus161", 171 },
{ "data_bus162", 172 },
{ "data_bus163", 173 },
{ "data_bus164", 174 },
{ "data_bus165", 175 },
{ "data_bus166", 176 },
{ "data_bus167", 177 },
{ "data_bus168", 178 },
{ "data_bus169", 179 },
{ "data_bus170", 180 },
{ "data_bus171", 181 },
{ "data_bus172", 182 },
{ "data_bus173", 183 },
{ "data_bus174", 184 },
{ "data_bus175", 185 },
{ "data_bus176", 186 },
{ "data_bus177", 187 },
{ "data_bus178", 188 },
{ "data_bus179", 189 },
{ "data_bus180", 190 },
{ "data_bus181", 191 },
{ "data_bus182", 192 },
{ "data_bus183", 193 },
{ "data_bus184", 194 },
{ "data_bus185", 195 },
{ "data_bus186", 196 },
{ "data_bus187", 197 },
{ "data_bus188", 198 },
{ "data_bus189", 199 },
{ "data_bus190", 200 },
{ "data_bus191", 201 },
{ "data_bus192", 202 },
{ "data_bus193", 203 },
{ "data_bus194", 204 },
{ "data_bus195", 205 },
{ "data_bus196", 206 },
{ "data_bus197", 207 },
{ "data_bus198", 208 },
{ "data_bus199", 209 },
{ "data_bus200", 210 },
{ "data_bus201", 211 },
{ "data_bus202", 212 },
{ "data_bus203", 213 },
{ "data_bus204", 214 },
{ "data_bus205", 215 },
{ "data_bus206", 216 },
{ "data_bus207", 217 },
{ "data_bus208", 218 },
{ "data_bus209", 219 },
{ "data_bus210", 220 },
{ "data_bus211", 221 },
{ "data_bus212", 222 },
{ "data_bus213", 223 },
{ "data_bus214", 224 },
{ "data_bus215", 225 },
{ "data_bus216", 226 },
{ "data_bus217", 227 },
{ "data_bus218", 228 },
{ "data_bus219", 229 },
{ "data_bus220", 230 },
{ "data_bus221", 231 },
{ "data_bus222", 232 },
{ "data_bus223", 233 },
{ "data_bus224", 234 },
{ "data_bus225", 235 },
{ "data_bus226", 236 },
{ "data_bus227", 237 },
{ "data_bus228", 238 },
{ "data_bus229", 239 },
{ "data_bus230", 240 },
{ "data_bus231", 241 },
{ "data_bus232", 242 },
{ "data_bus233", 243 },
{ "data_bus234", 244 },
{ "data_bus235", 245 },
{ "data_bus236", 246 },
{ "data_bus237", 247 },
{ "data_bus238", 248 },
{ "data_bus239", 249 },
{ "data_bus240", 250 },
{ "data_bus241", 251 },
{ "data_bus242", 252 },
{ "data_bus243", 253 },
{ "data_bus244", 254 },
{ "data_bus245", 255 },
{ "data_bus246", 256 },
{ "data_bus247", 257 },
{ "data_bus248", 258 },
{ "data_bus249", 259 },
{ "data_bus250", 260 },
{ "data_bus251", 261 },
{ "data_bus252", 262 },
{ "data_bus253", 263 },
{ "data_bus254", 264 },
{ "data_bus255", 265 },
{ "data_bus256", 266 },
{ "data_bus257", 267 },
{ "data_bus258", 268 },
{ "data_bus259", 269 },
{ "data_bus260", 270 },
{ "data_bus261", 271 },
{ "data_bus262", 272 },
{ "data_bus263", 273 },
{ "data_bus264", 274 },
{ "data_bus265", 275 },
{ "data_bus266", 276 },
{ "data_bus267", 277 },
{ "data_bus268", 278 },
{ "data_bus269", 279 },
{ "data_bus270", 280 },
{ "data_bus271", 281 },
{ "data_bus272", 282 },
{ "data_bus273", 283 },
{ "data_bus274", 284 },
{ "data_bus275", 285 },
{ "data_bus276", 286 },
{ "data_bus277", 287 },
{ "data_bus278", 288 },
{ "data_bus279", 289 },
{ "data_bus280", 290 },
{ "data_bus281", 291 },
{ "data_bus282", 292 },
{ "data_bus283", 293 },
{ "data_bus284", 294 },
{ "data_bus285", 295 },
{ "data_bus286", 296 },
{ "data_bus287", 297 },
{ "data_bus288", 298 },
{ "data_bus289", 299 },
{ "data_bus290", 300 },
{ "data_bus291", 301 },
{ "data_bus292", 302 },
{ "data_bus293", 303 },
{ "data_bus294", 304 },
{ "data_bus295", 305 },
{ "data_bus296", 306 },
{ "data_bus297", 307 },
{ "data_bus298", 308 },
{ "data_bus299", 309 },
{ "data_bus300", 310 },
{ "data_bus301", 311 },
{ "data_bus302", 312 },
{ "data_bus303", 313 },
{ "data_bus304", 314 },
{ "data_bus305", 315 },
{ "data_bus306", 316 },
{ "data_bus307", 317 },
{ "data_bus308", 318 },
{ "data_bus309", 319 },
{ "data_bus310", 320 },
{ "data_bus311", 321 },
{ "data_bus312", 322 },
{ "data_bus313", 323 },
{ "data_bus314", 324 },
{ "data_bus315", 325 },
{ "data_bus316", 326 },
{ "data_bus317", 327 },
{ "data_bus318", 328 },
{ "data_bus319", 329 },
{ "data_bus320", 330 },
{ "data_bus321", 331 },
{ "data_bus322", 332 },
{ "data_bus323", 333 },
{ "data_bus324", 334 },
{ "data_bus325", 335 },
{ "data_bus326", 336 },
{ "data_bus327", 337 },
{ "data_bus328", 338 },
{ "data_bus329", 339 },
{ "data_bus330", 340 },
{ "data_bus331", 341 },
{ "data_bus332", 342 },
{ "data_bus333", 343 },
{ "data_bus334", 344 },
{ "data_bus335", 345 },
{ "data_bus336", 346 },
{ "data_bus337", 347 },
{ "data_bus338", 348 },
{ "data_bus339", 349 },
{ "data_bus340", 350 },
{ "data_bus341", 351 },
{ "data_bus342", 352 },
{ "data_bus343", 353 },
{ "data_bus344", 354 },
{ "data_bus345", 355 },
{ "data_bus346", 356 },
{ "data_bus347", 357 },
{ "data_bus348", 358 },
{ "data_bus349", 359 },
{ "data_bus350", 360 },
{ "data_bus351", 361 },
{ "data_bus352", 362 },
{ "data_bus353", 363 },
{ "data_bus354", 364 },
{ "data_bus355", 365 },
{ "data_bus356", 366 },
{ "data_bus357", 367 },
{ "data_bus358", 368 },
{ "data_bus359", 369 },
{ "data_bus360", 370 },
{ "data_bus361", 371 },
{ "data_bus362", 372 },
{ "data_bus363", 373 },
{ "data_bus364", 374 },
{ "data_bus365", 375 },
{ "data_bus366", 376 },
{ "data_bus367", 377 },
{ "data_bus368", 378 },
{ "data_bus369", 379 },
{ "data_bus370", 380 },
{ "data_bus371", 381 },
{ "data_bus372", 382 },
{ "data_bus373", 383 },
{ "data_bus374", 384 },
{ "data_bus375", 385 },
{ "data_bus376", 386 },
{ "data_bus377", 387 },
{ "data_bus378", 388 },
{ "data_bus379", 389 },
{ "data_bus380", 390 },
{ "data_bus381", 391 },
{ "data_bus382", 392 },
{ "data_bus383", 393 },
{ "data_bus384", 394 },
{ "data_bus385", 395 },
{ "data_bus386", 396 },
{ "data_bus387", 397 },
{ "data_bus388", 398 },
{ "data_bus389", 399 },
{ "data_bus390", 400 },
{ "data_bus391", 401 },
{ "data_bus392", 402 },
{ "data_bus393", 403 },
{ "data_bus394", 404 },
{ "data_bus395", 405 },
{ "data_bus396", 406 },
{ "data_bus397", 407 },
{ "data_bus398", 408 },
{ "data_bus399", 409 },
{ "data_bus400", 410 },
{ "data_bus401", 411 },
{ "data_bus402", 412 },
{ "data_bus403", 413 },
{ "data_bus404", 414 },
{ "data_bus405", 415 },
{ "data_bus406", 416 },
{ "data_bus407", 417 },
{ "data_bus408", 418 },
{ "data_bus409", 419 },
{ "data_bus410", 420 },
{ "data_bus411", 421 },
{ "data_bus412", 422 },
{ "data_bus413", 423 },
{ "data_bus414", 424 },
{ "data_bus415", 425 },
{ "data_bus416", 426 },
{ "data_bus417", 427 },
{ "data_bus418", 428 },
{ "data_bus419", 429 },
{ "data_bus420", 430 },
{ "data_bus421", 431 },
{ "data_bus422", 432 },
{ "data_bus423", 433 },
{ "data_bus424", 434 },
{ "data_bus425", 435 },
{ "data_bus426", 436 },
{ "data_bus427", 437 },
{ "data_bus428", 438 },
{ "data_bus429", 439 },
{ "data_bus430", 440 },
{ "data_bus431", 441 },
{ "data_bus432", 442 },
{ "data_bus433", 443 },
{ "data_bus434", 444 },
{ "data_bus435", 445 },
{ "data_bus436", 446 },
{ "data_bus437", 447 },
{ "data_bus438", 448 },
{ "data_bus439", 449 },
{ "data_bus440", 450 },
{ "data_bus441", 451 },
{ "data_bus442", 452 },
{ "data_bus443", 453 },
{ "data_bus444", 454 },
{ "data_bus445", 455 },
{ "data_bus446", 456 },
{ "data_bus447", 457 },
{ "data_bus448", 458 },
{ "data_bus449", 459 },
{ "data_bus450", 460 },
{ "data_bus451", 461 },
{ "data_bus452", 462 },
{ "data_bus453", 463 },
{ "data_bus454", 464 },
{ "data_bus455", 465 },
{ "data_bus456", 466 },
{ "data_bus457", 467 },
{ "data_bus458", 468 },
{ "data_bus459", 469 },
{ "data_bus460", 470 },
{ "data_bus461", 471 },
{ "data_bus462", 472 },
{ "data_bus463", 473 },
{ "data_bus464", 474 },
{ "data_bus465", 475 },
{ "data_bus466", 476 },
{ "data_bus467", 477 },
{ "data_bus468", 478 },
{ "data_bus469", 479 },
{ "data_bus470", 480 },
{ "data_bus471", 481 },
{ "data_bus472", 482 },
{ "data_bus473", 483 },
{ "data_bus474", 484 },
{ "data_bus475", 485 },
{ "data_bus476", 486 },
{ "data_bus477", 487 },
{ "data_bus478", 488 },
{ "data_bus479", 489 },
{ "data_bus480", 490 },
{ "data_bus481", 491 },
{ "data_bus482", 492 },
{ "data_bus483", 493 },
{ "data_bus484", 494 },
{ "data_bus485", 495 },
{ "data_bus486", 496 },
{ "data_bus487", 497 },
{ "data_bus488", 498 },
{ "data_bus489", 499 },
{ "data_bus490", 500 },
{ "data_bus491", 501 },
{ "data_bus492", 502 },
{ "data_bus493", 503 },
{ "data_bus494", 504 },
{ "data_bus495", 505 },
{ "data_bus496", 506 },
{ "data_bus497", 507 },
{ "data_bus498", 508 },
{ "data_bus499", 509 },
{ "data_bus500", 510 },
{ "data_bus501", 511 },
{ "data_bus502", 512 },
{ "data_bus503", 513 },
{ "data_bus504", 514 },
{ "data_bus505", 515 },
{ "data_bus506", 516 },
{ "data_bus507", 517 },
{ "data_bus508", 518 },
{ "data_bus509", 519 },
{ "data_bus510", 520 },
{ "data_bus511", 521 },
{ "data_bus512", 522 },
{ "data_bus513", 523 },
{ "data_bus514", 524 },
{ "data_bus515", 525 },
{ "data_bus516", 526 },
{ "data_bus517", 527 },
{ "data_bus518", 528 },
{ "data_bus519", 529 },
{ "data_bus520", 530 },
{ "data_bus521", 531 },
{ "data_bus522", 532 },
{ "data_bus523", 533 },
{ "data_bus524", 534 },
{ "data_bus525", 535 },
{ "data_bus526", 536 },
{ "data_bus527", 537 },
{ "data_bus528", 538 },
{ "data_bus529", 539 },
{ "data_bus530", 540 },
{ "data_bus531", 541 },
{ "data_bus532", 542 },
{ "data_bus533", 543 },
{ "data_bus534", 544 },
{ "data_bus535", 545 },
{ "data_bus536", 546 },
{ "data_bus537", 547 },
{ "data_bus538", 548 },
{ "data_bus539", 549 },
{ "data_bus540", 550 },
{ "data_bus541", 551 },
{ "data_bus542", 552 },
{ "data_bus543", 553 },
{ "data_bus544", 554 },
{ "data_bus545", 555 },
{ "data_bus546", 556 },
{ "data_bus547", 557 },
{ "data_bus548", 558 },
{ "data_bus549", 559 },
{ "data_bus550", 560 },
{ "data_bus551", 561 },
{ "data_bus552", 562 },
{ "data_bus553", 563 },
{ "data_bus554", 564 },
{ "data_bus555", 565 },
{ "data_bus556", 566 },
{ "data_bus557", 567 },
{ "data_bus558", 568 },
{ "data_bus559", 569 },
{ "data_bus560", 570 },
{ "data_bus561", 571 },
{ "data_bus562", 572 },
{ "data_bus563", 573 },
{ "data_bus564", 574 },
{ "data_bus565", 575 },
{ "data_bus566", 576 },
{ "data_bus567", 577 },
{ "data_bus568", 578 },
{ "data_bus569", 579 },
{ "data_bus570", 580 },
{ "data_bus571", 581 },
{ "data_bus572", 582 },
{ "data_bus573", 583 },
{ "data_bus574", 584 },
{ "data_bus575", 585 },
{ "data_bus576", 586 },
{ "data_bus577", 587 },
{ "data_bus578", 588 },
{ "data_bus579", 589 },
{ "data_bus580", 590 },
{ "data_bus581", 591 },
{ "data_bus582", 592 },
{ "data_bus583", 593 },
{ "data_bus584", 594 },
{ "data_bus585", 595 },
{ "data_bus586", 596 },
{ "data_bus587", 597 },
{ "data_bus588", 598 },
{ "data_bus589", 599 },
{ "data_bus590", 600 },
{ "data_bus591", 601 },
{ "data_bus592", 602 },
{ "data_bus593", 603 },
{ "data_bus594", 604 },
{ "data_bus595", 605 },
{ "data_bus596", 606 },
{ "data_bus597", 607 },
{ "data_bus598", 608 },
{ "data_bus599", 609 },
{ "data_bus600", 610 },
{ "data_bus601", 611 },
{ "data_bus602", 612 },
{ "data_bus603", 613 },
{ "data_bus604", 614 },
{ "data_bus605", 615 },
{ "data_bus606", 616 },
{ "data_bus607", 617 },
{ "data_bus608", 618 },
{ "data_bus609", 619 },
{ "data_bus610", 620 },
{ "data_bus611", 621 },
{ "data_bus612", 622 },
{ "data_bus613", 623 },
{ "data_bus614", 624 },
{ "data_bus615", 625 },
{ "data_bus616", 626 },
{ "data_bus617", 627 },
{ "data_bus618", 628 },
{ "data_bus619", 629 },
{ "data_bus620", 630 },
{ "data_bus621", 631 },
{ "data_bus622", 632 },
{ "data_bus623", 633 },
{ "data_bus624", 634 },
{ "data_bus625", 635 },
{ "data_bus626", 636 },
{ "data_bus627", 637 },
{ "data_bus628", 638 },
{ "data_bus629", 639 },
{ "data_bus630", 640 },
{ "data_bus631", 641 },
{ "data_bus632", 642 },
{ "data_bus633", 643 },
{ "data_bus634", 644 },
{ "data_bus635", 645 },
{ "data_bus636", 646 },
{ "data_bus637", 647 },
{ "data_bus638", 648 },
{ "data_bus639", 649 },
{ "data_bus640", 650 },
{ "data_bus641", 651 },
{ "data_bus642", 652 },
{ "data_bus643", 653 },
{ "data_bus644", 654 },
{ "data_bus645", 655 },
{ "data_bus646", 656 },
{ "data_bus647", 657 },
{ "data_bus648", 658 },
{ "data_bus649", 659 },
{ "data_bus650", 660 },
{ "data_bus651", 661 },
{ "data_bus652", 662 },
{ "data_bus653", 663 },
{ "data_bus654", 664 },
{ "data_bus655", 665 },
{ "data_bus656", 666 },
{ "data_bus657", 667 },
{ "data_bus658", 668 },
{ "data_bus659", 669 },
{ "data_bus660", 670 },
{ "data_bus661", 671 },
{ "data_bus662", 672 },
{ "data_bus663", 673 },
{ "data_bus664", 674 },
{ "data_bus665", 675 },
{ "data_bus666", 676 },
{ "data_bus667", 677 },
{ "data_bus668", 678 },
{ "data_bus669", 679 },
{ "data_bus670", 680 },
{ "data_bus671", 681 },
{ "data_bus672", 682 },
{ "data_bus673", 683 },
{ "data_bus674", 684 },
{ "data_bus675", 685 },
{ "data_bus676", 686 },
{ "data_bus677", 687 },
{ "data_bus678", 688 },
{ "data_bus679", 689 },
{ "data_bus680", 690 },
{ "data_bus681", 691 },
{ "data_bus682", 692 },
{ "data_bus683", 693 },
{ "data_bus684", 694 },
{ "data_bus685", 695 },
{ "data_bus686", 696 },
{ "data_bus687", 697 },
{ "data_bus688", 698 },
{ "data_bus689", 699 },
{ "data_bus690", 700 },
{ "data_bus691", 701 },
{ "data_bus692", 702 },
{ "data_bus693", 703 },
{ "data_bus694", 704 },
{ "data_bus695", 705 },
{ "data_bus696", 706 },
{ "data_bus697", 707 },
{ "data_bus698", 708 },
{ "data_bus699", 709 },
{ "data_bus700", 710 },
{ "data_bus701", 711 },
{ "data_bus702", 712 },
{ "data_bus703", 713 },
{ "data_bus704", 714 },
{ "data_bus705", 715 },
{ "data_bus706", 716 },
{ "data_bus707", 717 },
{ "data_bus708", 718 },
{ "data_bus709", 719 },
{ "data_bus710", 720 },
{ "data_bus711", 721 },
{ "data_bus712", 722 },
{ "data_bus713", 723 },
{ "data_bus714", 724 },
{ "data_bus715", 725 },
{ "data_bus716", 726 },
{ "data_bus717", 727 },
{ "data_bus718", 728 },
{ "data_bus719", 729 },
{ "data_bus720", 730 },
{ "data_bus721", 731 },
{ "data_bus722", 732 },
{ "data_bus723", 733 },
{ "data_bus724", 734 },
{ "data_bus725", 735 },
{ "data_bus726", 736 },
{ "data_bus727", 737 },
{ "data_bus728", 738 },
{ "data_bus729", 739 },
{ "data_bus730", 740 },
{ "data_bus731", 741 },
{ "data_bus732", 742 },
{ "data_bus733", 743 },
{ "data_bus734", 744 },
{ "data_bus735", 745 },
{ "data_bus736", 746 },
{ "data_bus737", 747 },
{ "data_bus738", 748 },
{ "data_bus739", 749 },
{ "data_bus740", 750 },
{ "data_bus741", 751 },
{ "data_bus742", 752 },
{ "data_bus743", 753 },
{ "data_bus744", 754 },
{ "data_bus745", 755 },
{ "data_bus746", 756 },
{ "data_bus747", 757 },
{ "data_bus748", 758 },
{ "data_bus749", 759 },
{ "data_bus750", 760 },
{ "data_bus751", 761 },
{ "data_bus752", 762 },
{ "data_bus753", 763 },
{ "data_bus754", 764 },
{ "data_bus755", 765 },
{ "data_bus756", 766 },
{ "data_bus757", 767 },
{ "data_bus758", 768 },
{ "data_bus759", 769 },
{ "data_bus760", 770 },
{ "data_bus761", 771 },
{ "data_bus762", 772 },
{ "data_bus763", 773 },
{ "data_bus764", 774 },
{ "data_bus765", 775 },
{ "data_bus766", 776 },
{ "data_bus767", 777 },
{ "data_bus768", 778 },
{ "data_bus769", 779 },
{ "data_bus770", 780 },
{ "data_bus771", 781 },
{ "data_bus772", 782 },
{ "data_bus773", 783 },
{ "data_bus774", 784 },
{ "data_bus775", 785 },
{ "data_bus776", 786 },
{ "data_bus777", 787 },
{ "data_bus778", 788 },
{ "data_bus779", 789 },
{ "data_bus780", 790 },
{ "data_bus781", 791 },
{ "data_bus782", 792 },
{ "data_bus783", 793 },
{ "data_bus784", 794 },
{ "data_bus785", 795 },
{ "data_bus786", 796 },
{ "data_bus787", 797 },
{ "data_bus788", 798 },
{ "data_bus789", 799 },
{ "data_bus790", 800 },
{ "data_bus791", 801 },
{ "data_bus792", 802 },
{ "data_bus793", 803 },
{ "data_bus794", 804 },
{ "data_bus795", 805 },
{ "data_bus796", 806 },
{ "data_bus797", 807 },
{ "data_bus798", 808 },
{ "data_bus799", 809 },
{ "data_bus800", 810 },
{ "data_bus801", 811 },
{ "data_bus802", 812 },
{ "data_bus803", 813 },
{ "data_bus804", 814 },
{ "data_bus805", 815 },
{ "data_bus806", 816 },
{ "data_bus807", 817 },
{ "data_bus808", 818 },
{ "data_bus809", 819 },
{ "data_bus810", 820 },
{ "data_bus811", 821 },
{ "data_bus812", 822 },
{ "data_bus813", 823 },
{ "data_bus814", 824 },
{ "data_bus815", 825 },
{ "data_bus816", 826 },
{ "data_bus817", 827 },
{ "data_bus818", 828 },
{ "data_bus819", 829 },
{ "data_bus820", 830 },
{ "data_bus821", 831 },
{ "data_bus822", 832 },
{ "data_bus823", 833 },
{ "data_bus824", 834 },
{ "data_bus825", 835 },
{ "data_bus826", 836 },
{ "data_bus827", 837 },
{ "data_bus828", 838 },
{ "data_bus829", 839 },
{ "data_bus830", 840 },
{ "data_bus831", 841 },
{ "data_bus832", 842 },
{ "data_bus833", 843 },
{ "data_bus834", 844 },
{ "data_bus835", 845 },
{ "data_bus836", 846 },
{ "data_bus837", 847 },
{ "data_bus838", 848 },
{ "data_bus839", 849 },
{ "data_bus840", 850 },
{ "data_bus841", 851 },
{ "data_bus842", 852 },
{ "data_bus843", 853 },
{ "data_bus844", 854 },
{ "data_bus845", 855 },
{ "data_bus846", 856 },
{ "data_bus847", 857 },
{ "data_bus848", 858 },
{ "data_bus849", 859 },
{ "data_bus850", 860 },
{ "data_bus851", 861 },
{ "data_bus852", 862 },
{ "data_bus853", 863 },
{ "data_bus854", 864 },
{ "data_bus855", 865 },
{ "data_bus856", 866 },
{ "data_bus857", 867 },
{ "data_bus858", 868 },
{ "data_bus859", 869 },
{ "data_bus860", 870 },
{ "data_bus861", 871 },
{ "data_bus862", 872 },
{ "data_bus863", 873 },
{ "data_bus864", 874 },
{ "data_bus865", 875 },
{ "data_bus866", 876 },
{ "data_bus867", 877 },
{ "data_bus868", 878 },
{ "data_bus869", 879 },
{ "data_bus870", 880 },
{ "data_bus871", 881 },
{ "data_bus872", 882 },
{ "data_bus873", 883 },
{ "data_bus874", 884 },
{ "data_bus875", 885 },
{ "data_bus876", 886 },
{ "data_bus877", 887 },
{ "data_bus878", 888 },
{ "data_bus879", 889 },
{ "data_bus880", 890 },
{ "data_bus881", 891 },
{ "data_bus882", 892 },
{ "data_bus883", 893 },
{ "data_bus884", 894 },
{ "data_bus885", 895 },
{ "data_bus886", 896 },
{ "data_bus887", 897 },
{ "data_bus888", 898 },
{ "data_bus889", 899 },
{ "data_bus890", 900 },
{ "data_bus891", 901 },
{ "data_bus892", 902 },
{ "data_bus893", 903 },
{ "data_bus894", 904 },
{ "data_bus895", 905 },
{ "data_bus896", 906 },
{ "data_bus897", 907 },
{ "data_bus898", 908 },
{ "data_bus899", 909 },
{ "data_bus900", 910 },
{ "data_bus901", 911 },
{ "data_bus902", 912 },
{ "data_bus903", 913 },
{ "data_bus904", 914 },
{ "data_bus905", 915 },
{ "data_bus906", 916 },
{ "data_bus907", 917 },
{ "data_bus908", 918 },
{ "data_bus909", 919 },
{ "data_bus910", 920 },
{ "data_bus911", 921 },
{ "data_bus912", 922 },
{ "data_bus913", 923 },
{ "data_bus914", 924 },
{ "data_bus915", 925 },
{ "data_bus916", 926 },
{ "data_bus917", 927 },
{ "data_bus918", 928 },
{ "data_bus919", 929 },
{ "data_bus920", 930 },
{ "data_bus921", 931 },
{ "data_bus922", 932 },
{ "data_bus923", 933 },
{ "data_bus924", 934 },
{ "data_bus925", 935 },
{ "data_bus926", 936 },
{ "data_bus927", 937 },
{ "data_bus928", 938 },
{ "data_bus929", 939 },
{ "data_bus930", 940 },
{ "data_bus931", 941 },
{ "data_bus932", 942 },
{ "data_bus933", 943 },
{ "data_bus934", 944 },
{ "data_bus935", 945 },
{ "data_bus936", 946 },
{ "data_bus937", 947 },
{ "data_bus938", 948 },
{ "data_bus939", 949 },
{ "data_bus940", 950 },
{ "data_bus941", 951 },
{ "data_bus942", 952 },
{ "data_bus943", 953 },
{ "data_bus944", 954 },
{ "data_bus945", 955 },
{ "data_bus946", 956 },
{ "data_bus947", 957 },
{ "data_bus948", 958 },
{ "data_bus949", 959 },
{ "data_bus950", 960 },
{ "data_bus951", 961 },
{ "data_bus952", 962 },
{ "data_bus953", 963 },
{ "data_bus954", 964 },
{ "data_bus955", 965 },
{ "data_bus956", 966 },
{ "data_bus957", 967 },
{ "data_bus958", 968 },
{ "data_bus959", 969 },
{ "data_bus960", 970 },
{ "data_bus961", 971 },
{ "data_bus962", 972 },
{ "data_bus963", 973 },
{ "data_bus964", 974 },
{ "data_bus965", 975 },
{ "data_bus966", 976 },
{ "data_bus967", 977 },
{ "data_bus968", 978 },
{ "data_bus969", 979 },
{ "data_bus970", 980 },
{ "data_bus971", 981 },
{ "data_bus972", 982 },
{ "data_bus973", 983 },
{ "data_bus974", 984 },
{ "data_bus975", 985 },
{ "data_bus976", 986 },
{ "data_bus977", 987 },
{ "data_bus978", 988 },
{ "data_bus979", 989 },
{ "data_bus980", 990 },
{ "data_bus981", 991 },
{ "data_bus982", 992 },
{ "data_bus983", 993 },
{ "data_bus984", 994 },
{ "data_bus985", 995 },
{ "data_bus986", 996 },
{ "data_bus987", 997 },
{ "data_bus988", 998 },
{ "data_bus989", 999 },
{ "data_bus990", 1000 },
{ "data_bus991", 1001 },
{ "data_bus992", 1002 },
{ "data_bus993", 1003 },
{ "data_bus994", 1004 },
{ "data_bus995", 1005 },
{ "data_bus996", 1006 },
{ "data_bus997", 1007 },
{ "data_bus998", 1008 },
{ "data_bus999", 1009 },
{ "data_bus1000", 1010 },
{ "data_bus1001", 1011 },
{ "data_bus1002", 1012 },
{ "data_bus1003", 1013 },
{ "data_bus1004", 1014 },
{ "data_bus1005", 1015 },
{ "data_bus1006", 1016 },
{ "data_bus1007", 1017 },
{ "data_bus1008", 1018 },
{ "data_bus1009", 1019 },
{ "data_bus1010", 1020 },
{ "data_bus1011", 1021 },
{ "data_bus1012", 1022 },
{ "data_bus1013", 1023 },
{ "data_bus1014", 1024 },
{ "data_bus1015", 1025 },
{ "data_bus1016", 1026 },
{ "data_bus1017", 1027 },
{ "data_bus1018", 1028 },
{ "data_bus1019", 1029 },
{ "data_bus1020", 1030 },
{ "data_bus1021", 1031 },
{ "data_bus1022", 1032 },
{ "data_bus1023", 1033 },
{ "CoinBase", 1034 },
{ "TimeStamp", 1035 },
{ "Number", 1036 },
{ "Difficulty", 1037 },
{ "GasLimit", 1038 },
{ NULL, -1 },
};

#endif // QEMU_TRACE_REGS_H