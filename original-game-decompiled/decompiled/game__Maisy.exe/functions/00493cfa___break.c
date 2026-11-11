
/* ==== __break @ 00493cfa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493cfa-00493cfa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


