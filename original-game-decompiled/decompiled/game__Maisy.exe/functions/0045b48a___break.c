
/* ==== __break @ 0045b48a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045b48a-0045b48a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


