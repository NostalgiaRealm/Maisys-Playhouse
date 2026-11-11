
/* ==== __break @ 00448086 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448086-00448086
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


