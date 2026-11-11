
/* ==== __break @ 0040fb67 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fb67-0040fb67
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


