
/* ==== __break @ 004383df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004383df-004383df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


