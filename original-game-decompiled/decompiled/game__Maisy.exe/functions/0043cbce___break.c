
/* ==== __break @ 0043cbce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cbce-0043cbce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


