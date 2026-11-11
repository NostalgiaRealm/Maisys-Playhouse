
/* ==== __break @ 00429719 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00429719-00429719
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


