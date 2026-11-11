
/* ==== __break @ 004304de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304de-004304de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


