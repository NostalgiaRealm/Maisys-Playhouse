
/* ==== __break @ 0043996d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043996d-0043996d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


