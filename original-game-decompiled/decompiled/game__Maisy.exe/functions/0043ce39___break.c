
/* ==== __break @ 0043ce39 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ce39-0043ce39
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


