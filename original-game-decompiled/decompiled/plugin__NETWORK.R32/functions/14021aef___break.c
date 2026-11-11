
/* ==== __break @ 14021aef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aef-14021aef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


