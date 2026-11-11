
/* ==== __break @ 00412142 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00412142-00412142
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


