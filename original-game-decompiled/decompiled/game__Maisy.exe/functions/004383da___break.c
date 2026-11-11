
/* ==== __break @ 004383da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004383da-004383da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


