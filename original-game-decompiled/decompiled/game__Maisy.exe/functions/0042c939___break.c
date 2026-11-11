
/* ==== __break @ 0042c939 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c939-0042c939
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


