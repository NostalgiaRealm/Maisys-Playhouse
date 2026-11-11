
/* ==== __break @ 00493cff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493cff-00493cff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


