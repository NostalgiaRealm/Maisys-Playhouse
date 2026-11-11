
/* ==== __break @ 00448aef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448aef-00448aef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


