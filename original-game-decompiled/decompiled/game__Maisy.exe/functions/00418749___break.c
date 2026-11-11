
/* ==== __break @ 00418749 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418749-00418749
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


