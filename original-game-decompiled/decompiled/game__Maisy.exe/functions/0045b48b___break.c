
/* ==== __break @ 0045b48b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045b48b-0045b48b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


