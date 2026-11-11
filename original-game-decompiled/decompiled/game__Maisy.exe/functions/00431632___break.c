
/* ==== __break @ 00431632 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00431632-00431632
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


