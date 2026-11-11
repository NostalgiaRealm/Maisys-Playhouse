
/* ==== __break @ 004245ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004245ec-004245ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


