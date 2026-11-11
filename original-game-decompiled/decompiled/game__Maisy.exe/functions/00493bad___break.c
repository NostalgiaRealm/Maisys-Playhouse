
/* ==== __break @ 00493bad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493bad-00493bad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


