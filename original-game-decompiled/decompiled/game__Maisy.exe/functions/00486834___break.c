
/* ==== __break @ 00486834 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486834-00486834
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


