
/* ==== __break @ 00493cfc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493cfc-00493cfc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


