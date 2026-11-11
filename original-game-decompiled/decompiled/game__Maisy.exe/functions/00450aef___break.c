
/* ==== __break @ 00450aef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450aef-00450aef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


