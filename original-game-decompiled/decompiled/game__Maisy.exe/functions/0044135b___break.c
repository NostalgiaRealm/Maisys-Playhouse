
/* ==== __break @ 0044135b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044135b-0044135b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


