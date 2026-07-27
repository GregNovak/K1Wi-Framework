#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QTextEdit;
class QPushButton;
class QLineEdit;
class QCheckBox;
class QTabWidget;
class QStackedWidget;
class QWidget;
class QComboBox;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    QTabWidget *tabs;

    QWidget *copyTab;
    QTabWidget *copyDetailsTabs;
    QLineEdit *sourcePath;
    QLineEdit *destPath;
    QComboBox *copyModeCombo;
    QCheckBox *forceCheck;
    QTextEdit *copyFindingsLog;
    QTextEdit *outputLog;

    QWidget *lyzerTab;
    QTabWidget *lyzerDetailsTabs;
    QLineEdit *lyzerTargetPath;
    QComboBox *lyzerModeCombo;
    QTextEdit *lyzerFindingsLog;
    QTextEdit *lyzerOutputLog;

    QWidget *extractTab;
    QTabWidget *extractDetailsTabs;
    QLineEdit *extractTargetPath;
    QCheckBox *extractRecursiveCheck;
    QTextEdit *extractFindingsLog;
    QTextEdit *extractOutputLog;
    
    QWidget *delTab;
    QTabWidget *delDetailsTabs;
    QLineEdit *delTargetPath;
    QComboBox *delStandardCombo;
    QLineEdit *delCustomPassCount;
    QTextEdit *delFindingsLog;
    QTextEdit *delOutputLog;
    
    QWidget *hashTab;
    QTabWidget *hashDetailsTabs;
    QComboBox *hashAlgorithmCombo;
    QComboBox *hashModeCombo;
    QLineEdit *hashFilePath;
    QLineEdit *hashExpectedValue;
    QLineEdit *hashCompareFilePath;
    QTextEdit *hashFindingsLog;
    QTextEdit *hashOutputLog;
    
    QWidget *stringTab;
    QTabWidget *stringDetailsTabs;
    QComboBox *stringInputModeCombo;
    QLineEdit *stringTextInput;
    QLineEdit *stringFilePath;
    QCheckBox *stringDecodeCheck;
    QLineEdit *stringMinLength;
    QTextEdit *stringFindingsLog;
    QTextEdit *stringOutputLog;
    
    QWidget *magicTab;
    QTabWidget *magicDetailsTabs;
    QComboBox *magicModeCombo;
    QLineEdit *magicTargetPath;
    QLineEdit *magicRecoveryPath;
    QPushButton *magicRecoveryBrowseButton;
    QTextEdit *magicFindingsLog;
    QTextEdit *magicOutputLog;
    
    QWidget *elfInfoTab;
    QTabWidget *elfInfoDetailsTabs;
    QLineEdit *elfInfoTargetPath;
    QTextEdit *elfInfoFindingsLog;
    QTextEdit *elfInfoOutputLog;

    QWidget *readSearchTab;
    QTabWidget *readSearchDetailsTabs;
    QComboBox *readSearchOperationCombo;
    QLineEdit *readSearchTargetPath;
    QStackedWidget *readSearchModeStack;

    QWidget *readModePage;

    QWidget *searchModePage;
    QComboBox *searchPatternSourceCombo;
    QComboBox *searchInterpretationCombo;
    QLineEdit *searchPatternValue;
    QLineEdit *searchPatternsFilePath;
    QPushButton *searchPatternsBrowseButton;
    QLineEdit *searchBeforeValue;
    QLineEdit *searchAfterValue;
    QLineEdit *searchBeforeHexValue;
    QLineEdit *searchAfterHexValue;
    QCheckBox *searchFlagOnlyCheck;

    QTextEdit *readSearchFindingsLog;
    QTextEdit *readSearchOutputLog;

    QWidget *rsaUtilitiesTab;
    QTabWidget *rsaUtilitiesDetailsTabs;
    QComboBox *rsaUtilityCombo;
    QStackedWidget *rsaUtilityInputStack;
    QLineEdit *rsaUtilityFilePath;
    QPushButton *rsaUtilityBrowseButton;
    QLineEdit *rsaUtilityPValue;
    QLineEdit *rsaUtilityQValue;
    QLineEdit *rsaUtilityEValue;
    QTextEdit *rsaUtilitiesFindingsLog;
    QTextEdit *rsaUtilitiesOutputLog;

    QWidget *entropyTab;
    QTabWidget *entropyDetailsTabs;
    QComboBox *entropyModeCombo;
    QLineEdit *entropyTargetPath;
    QTextEdit *entropyFindingsLog;
    QTextEdit *entropyOutputLog;
    
    QWidget *pcapTab;
    QTabWidget *pcapDetailsTabs;
    QComboBox *pcapModeCombo;
    QLineEdit *pcapTargetPath;
    QTextEdit *pcapFindingsLog;
    QTextEdit *pcapNetworkLog;
    QTextEdit *pcapTransportLog;
    QTextEdit *pcapPayloadLog;
    QTextEdit *pcapOutputLog;

    void buildCopyTab();
    void buildLyzerTab();
    void buildExtractTab();
    void buildDelTab();
    void buildHashTab();
    void buildStringTab();
    void buildMagicTab();
    void buildElfInfoTab();
    void buildReadSearchTab();
    void buildRsaUtilitiesTab();
    void buildEntropyTab();
    void buildPcapTab();
    
    void runCopyCommand();
    void runLyzerCommand();
    void runExtractCommand();
    void runDelCommand();
    void runHashCommand();
    void runStringCommand();
    void runMagicCommand();
    void runElfInfoCommand();
    void runReadSearchCommand();
    void runRsaUtilitiesCommand();
    void runEntropyCommand();
    void runPcapCommand();
};

#endif
