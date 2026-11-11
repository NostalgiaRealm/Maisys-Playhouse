
/* ==== __break @ 00448085 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448085-00448085
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


