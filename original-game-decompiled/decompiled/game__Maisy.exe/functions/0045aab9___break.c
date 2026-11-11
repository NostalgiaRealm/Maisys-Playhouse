
/* ==== __break @ 0045aab9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045aab9-0045aab9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


