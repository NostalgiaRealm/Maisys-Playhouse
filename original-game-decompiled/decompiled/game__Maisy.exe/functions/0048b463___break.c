
/* ==== __break @ 0048b463 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048b463-0048b463
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


