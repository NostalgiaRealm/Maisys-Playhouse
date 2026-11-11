
/* ==== __break @ 0042f938 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f938-0042f938
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


