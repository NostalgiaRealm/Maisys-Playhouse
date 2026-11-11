
/* ==== __break @ 00429736 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00429736-00429736
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


